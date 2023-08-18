
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLwCharge_exec_stop(L2CFighterPackun *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE)
  ;
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  FUN_7100007c20(this);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  uVar8 = lib::L2CValue::as_number(aLStack80);
  uVar9 = lib::L2CValue::as_number(aLStack112);
  uVar10 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar9,uVar8);
  uStack56 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar5,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x11a514d9d2);
  uVar6 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar6 & 1) == 0) {
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x11928d91f6);
    uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_7100006ad4;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
LAB_7100006ad4:
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,99.0);
    uVar6 = lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y)
      ;
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      bVar2 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar2 & 1))
      ;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y)
      ;
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      bVar2 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar2 & 1))
      ;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar2 & 1));
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

