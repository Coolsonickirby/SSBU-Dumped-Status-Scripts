
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::SetStatusScripts(L2CFighterRoy *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _FIGHTER_ROY_STATUS_KIND_NUM;
  pLVar5 = (L2CValue *)(this + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lua2cpp::L2CFighterCommon::sub_set_fighter_common_table((L2CFighterCommon *)this);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_TURN);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNTurn_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi3_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDash_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDashEnd_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_TURN);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNTurn_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi3_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDash_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDashEnd_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_TURN);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNTurn_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi3_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDash_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDashEnd_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi3_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_DASH);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalDash_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialN_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd3_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_END_MAX);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEndMax_exit);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_exit);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_2);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_exit);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_exit);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi4_exit);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_CHECK_ATTACK);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi3_check_atk);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Guard_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLw_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLw_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLw_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Final_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS2_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS2_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS2_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_pre);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_end);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::Wait_main);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS3_exec_stop);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialS4_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_ON_CHANGE_LR);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi_on_change_lr);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialLwHit_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(pLVar5,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_CHROM);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_7100002c50;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_exec_stop);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_exec_stop);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalAttack_init);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_exec);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack80,aLStack96,status::FinalEnd_exec_stop);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100002c50:
  lua2cpp::L2CFighterCommon::sub_fighter_common_settings((L2CFighterCommon *)this);
  return;
}

