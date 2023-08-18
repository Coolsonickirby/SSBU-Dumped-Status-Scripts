
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::SpecialSWall_init(L2CFighterKamui *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_IS_WALL_PIERCE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    fVar5 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.2);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_40,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar5);
      fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar5);
      uVar6 = lib::L2CValue::as_number(aLStack112);
      uVar7 = lib::L2CValue::as_number(aLStack80);
      uVar8 = lib::L2CValue::as_number(aLStack128);
      local_40 = CONCAT44(uVar7,uVar6);
      uStack56 = (ulong)uVar8;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

