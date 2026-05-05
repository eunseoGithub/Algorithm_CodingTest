#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Song {
    int id;
    int plays;
};

bool compareSongs(const Song& a, const Song& b) {
    if (a.plays == b.plays) {
        return a.id < b.id; // 3순위: 고유 번호 오름차순
    }
    return a.plays > b.plays; // 2순위: 재생 횟수 내림차순
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    // 1. 데이터 파싱 및 그룹화
    unordered_map<string, int> genreTotalPlays;
    unordered_map<string, vector<Song>> genreMap;
    
    for (int i = 0; i < genres.size(); ++i) {
        genreTotalPlays[genres[i]] += plays[i];
        genreMap[genres[i]].push_back({i, plays[i]});
    }
    
    // 2. 장르를 총 재생 횟수 순으로 정렬하기 위해 벡터로 변환
    vector<pair<string, int>> sortedGenres(genreTotalPlays.begin(), genreTotalPlays.end());
    sort(sortedGenres.begin(), sortedGenres.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second; // 1순위: 장르 합계 내림차순
    });
    
    // 3. 정렬된 장르 순서대로 순회하며 곡 추출
    for (auto& genrePair : sortedGenres) {
        string genreName = genrePair.first;
        vector<Song>& songs = genreMap[genreName];
        
        // 해당 장르 내의 곡들을 기준에 맞게 정렬
        sort(songs.begin(), songs.end(), compareSongs);
        
        // 최대 2곡까지 수록
        for (int i = 0; i < songs.size() && i < 2; ++i) {
            answer.push_back(songs[i].id);
        }
    }
    
    return answer;
}