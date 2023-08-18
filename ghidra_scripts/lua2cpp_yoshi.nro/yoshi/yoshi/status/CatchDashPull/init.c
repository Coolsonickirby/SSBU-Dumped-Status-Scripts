
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::CatchDashPull_init(L2CFighterYoshi *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar4 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  fVar7 = (float)app::FighterSpecializer_Yoshi::get_catch_pull_frame(pFVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
  iVar3 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_CATCH);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_CATCH_DASH);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_CATCH_TURN);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_71000091ec;
      lib::L2CValue::L2CValue(aLStack96,0xa5f869486);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xae4c85cc1);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x5c56b7b64);
    lib::L2CValue::operator_(aLStack128,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_71000091ec:
  lib::L2CValue::L2CValue(aLStack96,0xaeaab5d22);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,true);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  bVar2 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),fVar9,(bool)(bVar2 & 1),false)
  ;
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  app::lua_bind::SlopeModule__update_model_top_angle_impl(this->moduleAccessor);
  app::lua_bind::CatchModule__set_catch_impl(this->moduleAccessor,0x50000000);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

