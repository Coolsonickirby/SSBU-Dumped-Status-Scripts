
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::CatchPhysicsRewind_end(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  HitStatus HVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  FUN_7100018520(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71000209e0(this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar4,iVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar4,iVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

