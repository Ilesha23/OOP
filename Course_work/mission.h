#pragma once
int getCurrentMission(int x) {
	int mission = 0;
	if ((x > 0) && (x < 400)) { mission = 0; }
	if (x > 400) { mission = 1; }
	if (x > 700) { mission = 2; }
	if (x > 1000) { mission = 3; }
	return mission;
}

std::string getTextMission(int currMission) {
	std::string missionText = "";
	switch (currMission)
	{
	case 0: missionText = "mission 0"; break;
	case 1: missionText = "mission 1"; break;
	case 2: missionText = "mission 2"; break;
	case 3: missionText = "mission 3"; break;
	default:
		break;
	}
	return missionText;
}