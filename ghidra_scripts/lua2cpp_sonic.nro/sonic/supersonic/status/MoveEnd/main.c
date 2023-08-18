
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicSupersonic::status::MoveEnd_main
          (L2CWeaponSonicSupersonic *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack192,0x1275dcdfe1);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar3 = lib::L2CValue::as_hash(aLStack192);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_KINETIC_TYPE_SONIC_SUPERSONIC_FINAL_MOVE_END);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,*pfVar4);
  lib::L2CValue::L2CValue(aLStack176,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar4[2]);
  FUN_7100028a00(aLStack128,this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SONIC_SUPERSONIC_INSTANCE_WORK_ID_FLOAT_START_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar6);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  lVar10 = lib::L2CValue::as_number(this_00);
  uVar8 = lib::L2CValue::as_number(this_01);
  local_70 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack104 = (ulong)uVar8;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  uVar9 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar6);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar6);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  FUN_710002b0a0(&local_70,this);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,fVar6);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack240);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,true);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,MoveEnd_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

