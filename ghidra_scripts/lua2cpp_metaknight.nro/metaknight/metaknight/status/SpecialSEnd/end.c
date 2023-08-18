
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialSEnd_end(L2CFighterMetaknight *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  lVar8 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,HVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1402637e28);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar7 & 1) == 0) {
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,HVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x174dffaabb);
    uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) != 0) {
LAB_7100009234:
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_710000923c;
    }
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,HVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x173af89a2d);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) != 0) {
LAB_710000922c:
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_7100009234;
    }
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,HVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x17a49c0f8e);
    uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      goto LAB_710000922c;
    }
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,HVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1158d0953d);
    uVar7 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) == 0) {
      HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,HVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14b8f0036b);
      uVar7 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar7 & 1) == 0) {
        HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack224,HVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14cff733fd);
        uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar7 & 1) == 0) {
          HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack240,HVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x145193a65e);
          uVar7 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_50);
          uVar7 = uVar7 & 0xffffffff;
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
          lib::L2CValue::_L2CValue(aLStack240);
        }
        else {
          uVar7 = 1;
        }
        lib::L2CValue::_L2CValue(aLStack224);
      }
      else {
        uVar7 = 1;
      }
      lib::L2CValue::_L2CValue(aLStack208);
    }
    else {
      uVar7 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) goto LAB_7100009244;
  }
  else {
LAB_710000923c:
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100009244:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) == 0) goto LAB_71000094b8;
    iVar2 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_METAKNIGHT_STATUS_KIND_SPECIAL_S_END);
    uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) != 0) {
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) == 0) goto LAB_71000094b8;
      goto LAB_7100009294;
    }
  }
  else {
LAB_7100009294:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0xd07d69a9b);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar6 = (float)lib::L2CValue::as_number(aLStack144);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0xa4e6eeca8);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_71000094b8:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

