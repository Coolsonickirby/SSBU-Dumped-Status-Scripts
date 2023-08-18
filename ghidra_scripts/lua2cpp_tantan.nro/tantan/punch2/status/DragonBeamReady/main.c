
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanPunch2::status::DragonBeamReady_main
          (L2CWeaponTantanPunch2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_FLAG_IS_REINFORCE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack224,0x118c1f41bc);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar4 = lib::L2CValue::as_hash(aLStack224);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,0x18fbedbf6a);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar4 = lib::L2CValue::as_hash(aLStack224);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    fVar6 = 0.0;
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    uVar8 = app::lua_bind::LinkModule__get_model_constraint_target_joint_rotation_impl
                      (this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,(float)uVar8);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar8 >> 0x20));
    lib::L2CValue::L2CValue(aLStack192,fVar6);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::operator_(this_00,aLStack208);
    lib::L2CValue::operator_(this_01,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_INIT_PARENT_ROTATE_X);
    fVar6 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_INIT_PARENT_ROTATE_Y);
    fVar6 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_INIT_PARENT_ROTATE_Z);
    fVar6 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack224,DragonBeamReady_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

