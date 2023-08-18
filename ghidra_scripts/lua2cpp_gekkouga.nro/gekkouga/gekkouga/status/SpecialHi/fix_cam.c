
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHi_fix_cam(L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_FRAME_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0x11f45f473e);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  uVar2 = lib::L2CValue::operator_(aLStack128,aLStack144);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x31d39a761);
    HVar4 = lib::L2CValue::as_hash(aLStack160);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack96);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar7,uVar6);
    uStack56 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar4,(Vector3f *)&local_40,0,0);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

