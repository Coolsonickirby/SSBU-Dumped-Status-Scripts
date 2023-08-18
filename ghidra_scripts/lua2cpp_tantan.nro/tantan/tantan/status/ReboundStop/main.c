
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::ReboundStop_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_FLAG_CATCH_REBOUND);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    lib::L2CValue::L2CValue(aLStack96,HIT_STATUS_OFF);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar3 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar6,iVar2,HVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    lib::L2CValue::L2CValue(aLStack96,HIT_STATUS_OFF);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar3 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar6,iVar2,HVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_ReboundStop(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

