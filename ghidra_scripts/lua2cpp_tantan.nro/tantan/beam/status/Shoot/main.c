
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanBeam::status::Shoot_main(L2CWeaponTantanBeam *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLAG_IS_REINFORCE);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack232);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack232,0x57044fcbe);
    lib::L2CValue::L2CValue(aLStack136,0.0);
    lib::L2CValue::L2CValue(aLStack152,1.0);
    lib::L2CValue::L2CValue(aLStack168,false);
    HVar5 = lib::L2CValue::as_hash(aLStack232);
    fVar7 = (float)lib::L2CValue::as_number(aLStack136);
    fVar8 = (float)lib::L2CValue::as_number(aLStack152);
    bVar1 = lib::L2CValue::as_bool(aLStack168);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack232,0x95e97c5f6);
    lib::L2CValue::L2CValue(aLStack136,0.0);
    lib::L2CValue::L2CValue(aLStack152,1.0);
    lib::L2CValue::L2CValue(aLStack168,false);
    HVar5 = lib::L2CValue::as_hash(aLStack232);
    fVar7 = (float)lib::L2CValue::as_number(aLStack136);
    fVar8 = (float)lib::L2CValue::as_number(aLStack152);
    bVar1 = lib::L2CValue::as_bool(aLStack168);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack232);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack152,0.0);
    lib::L2CValue::L2CValue(aLStack168,0.0);
    fVar7 = 0.0;
    lib::L2CValue::L2CValue(aLStack184,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x68,(L2CValue)0x58,(L2CValue)0x48);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    lib::L2CValue::L2CValue(aLStack248,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack264,0x4d27eea40);
    iVar3 = lib::L2CValue::as_integer(aLStack248);
    HVar5 = lib::L2CValue::as_hash(aLStack264);
    uVar9 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                      (this->moduleAccessor,iVar3,HVar5,false);
    lib::L2CValue::L2CValue(aLStack232,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack216,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack200,fVar7);
    lib::L2CValue::operator_(pLVar6,aLStack232);
    lib::L2CValue::operator_(this_00,aLStack216);
    lib::L2CValue::operator_(this_01,aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::operator_(pLVar6,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue
              (aLStack232,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_PARENT_JOINT_POS_X);
    fVar7 = (float)lib::L2CValue::as_number(aLStack248);
    iVar3 = lib::L2CValue::as_integer(aLStack232);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::operator_(pLVar6,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue
              (aLStack232,_WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_FLOAT_PARENT_JOINT_POS_Y);
    fVar7 = (float)lib::L2CValue::as_number(aLStack248);
    iVar3 = lib::L2CValue::as_integer(aLStack232);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue(aLStack232,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue
            (aLStack136,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_INT_HIT_GROUND_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer(aLStack232);
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::L2CValue(aLStack232,-1);
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_TANTAN_BEAM_STATUS_WORK_ID_INT_HIT_GROUND_LINE_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack232);
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::L2CValue(aLStack232,Shoot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x18);
  lib::L2CValue::_L2CValue(aLStack232);
  return;
}

