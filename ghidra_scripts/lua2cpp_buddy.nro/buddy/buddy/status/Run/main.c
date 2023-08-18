
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::Run_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::status_Run_Sub(this);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_DASH);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_TURN_DASH);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100019158;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar3,false);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  lib::L2CValue::L2CValue(aLStack112,0x9a3e64f01);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,false);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  HVar6 = lib::L2CValue::as_hash(aLStack112);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar3,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,
             true,true,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100019158:
  lib::L2CValue::L2CValue(aLStack96,Run_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

