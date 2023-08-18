
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalStart_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::L2CValue(aLStack160,-5.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  lVar8 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar5;
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  fVar6 = (float)lib::L2CValue::as_number(aLStack176);
  iVar1 = app::GroundUtility::check_dead_area2((Vector3f *)&local_50,fVar4,fVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_UP);
  uVar7 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_FLY_POS_X);
    fVar4 = (float)lib::L2CValue::as_number(aLStack112);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_FLY_POS_Y);
    fVar4 = (float)lib::L2CValue::as_number(aLStack112);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack128,0x9b9c6bd7e);
    uVar7 = lib::L2CValue::as_integer(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FLY_COUNT);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_KIND_FINAL_WAIT_FLY);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

