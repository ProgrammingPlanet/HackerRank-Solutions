int ones_in_or(string bin_str1, string bin_str2)
{
    //size of both strings are equal
    int result = 0;
    for(int i=0; i<bin_str1.size(); i++)
    {
        if(bin_str1[i]=='1' | bin_str2[i]=='1') 
        {
            result++;
        }
    }
    
    return result;
}


vector<int> acmTeam(vector<string> topic) 
{
    int attendees = topic[0].size(), no_topics = topic.size();
    
    int max_topic_known = 0, cur_topic_known, no_teams = 0;
    
    for(int i=0; i<no_topics; i++)
    {
        for(int j=i+1; j<no_topics; j++)
        {
            cur_topic_known = ones_in_or(topic[i],topic[j]);
            if(cur_topic_known > max_topic_known)
            {
                max_topic_known = cur_topic_known;
                no_teams = 1;
            }
            else if(cur_topic_known == max_topic_known)
            {
                no_teams++;
            }
        }
    }
    
    return {max_topic_known, no_teams};
}