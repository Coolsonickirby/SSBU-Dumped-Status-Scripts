
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPacman::status::SpecialSMove_exec(L2CAgent *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *return_value;
  int iVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  ulong local_170;
  ulong uStack360;
  L2CValue aLStack352 [24];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  undefined auStack216 [32];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack400,false);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ROT);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar7);
  lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack152,0.0);
  lib::L2CValue::L2CValue(aLStack168,0.0);
  HVar4 = lib::L2CValue::as_hash(aLStack136);
  uVar9 = lib::L2CValue::as_number(aLStack416);
  lVar10 = lib::L2CValue::as_number(aLStack152);
  uVar8 = lib::L2CValue::as_number(aLStack168);
  local_170 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack360 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar4,(Vector3f *)&local_170,0,0);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,false);
  uVar9 = lib::L2CValue::operator__(aLStack400,(L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack136,0);
    lib::L2CValue::L2CValue(aLStack152,0);
    lib::L2CValue::L2CValue(aLStack168,0);
    lib::L2CValue::L2CValue(aLStack184,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack216 + 0x10),0);
    lib::L2CValue::L2CValue((L2CValue *)auStack216,0);
    lib::L2CValue::L2CValue(aLStack232,0);
    lib::L2CValue::L2CValue(aLStack248,0);
    lib::L2CValue::L2CValue(aLStack264,0);
    lib::L2CValue::L2CValue(aLStack280,_PACMAN_SPECIAL_S_PUT_ESA_NUM);
    iVar2 = lib::L2CValue::as_integer(aLStack280);
    if (0 < iVar2) {
      iVar6 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack296,iVar6);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_170,
                   _FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0);
        lib::L2CValue::operator_((L2CValue *)&local_170,aLStack296);
        lib::L2CValue::_L2CValue((L2CValue *)&local_170);
        iVar3 = lib::L2CValue::as_integer(aLStack328);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack312,iVar3);
        lib::L2CValue::operator_(aLStack232,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        lib::L2CValue::_L2CValue(aLStack328);
        lib::L2CValue::L2CValue((L2CValue *)&local_170,_PACMAN_SPECIAL_S_EFFECT_INVALID);
        uVar9 = lib::L2CValue::operator__(aLStack232,(L2CValue *)&local_170);
        lib::L2CValue::_L2CValue((L2CValue *)&local_170);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X0);
          lib::L2CValue::operator_((L2CValue *)&local_170,aLStack296);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          iVar3 = lib::L2CValue::as_integer(aLStack328);
          fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack312,fVar7);
          lib::L2CValue::operator_(aLStack168,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y0);
          lib::L2CValue::operator_((L2CValue *)&local_170,aLStack296);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          iVar3 = lib::L2CValue::as_integer(aLStack328);
          fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack312,fVar7);
          lib::L2CValue::operator_(aLStack184,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack328);
          fVar7 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar7);
          lib::L2CValue::operator_((L2CValue *)(auStack216 + 0x10),(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::L2CValue(aLStack312,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack312);
          fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                   (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar7);
          lib::L2CValue::operator_(aLStack248,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::L2CValue(aLStack312,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack312);
          fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                   (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar7);
          lib::L2CValue::operator_(aLStack136,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::operator_(aLStack168,aLStack248);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::operator_(aLStack184,aLStack136);
          lib::L2CValue::operator_(aLStack184,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          uVar11 = app::sv_fighter_util::get_world_move_seed();
          lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)uVar11);
          lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar11 >> 0x20));
          lib::L2CValue::operator_(aLStack264,(L2CValue *)&local_170);
          lib::L2CValue::operator_((L2CValue *)auStack216,aLStack352);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::operator_(aLStack168,aLStack264);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::operator_(aLStack184,(L2CValue *)auStack216);
          lib::L2CValue::operator_(aLStack184,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,0.0);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X0);
          lib::L2CValue::operator_((L2CValue *)&local_170,aLStack296);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          fVar7 = (float)lib::L2CValue::as_number(aLStack312);
          iVar3 = lib::L2CValue::as_integer(aLStack328);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,0.0);
          lib::L2CValue::operator_(aLStack184,(L2CValue *)&local_170);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y0);
          lib::L2CValue::operator_((L2CValue *)&local_170,aLStack296);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
          fVar7 = (float)lib::L2CValue::as_number(aLStack312);
          iVar3 = lib::L2CValue::as_integer(aLStack328);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,MA_MSC_EFFECT_SET_POS);
          lib::L2CAgent::clear_lua_stack(this);
          lib::L2CAgent::push_lua_stack(this,(L2CValue *)&local_170);
          lib::L2CAgent::push_lua_stack(this,aLStack232);
          lib::L2CAgent::push_lua_stack(this,aLStack168);
          lib::L2CAgent::push_lua_stack(this,aLStack184);
          lib::L2CAgent::push_lua_stack(this,(L2CValue *)(auStack216 + 0x10));
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(this,1);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue((L2CValue *)&local_170);
        }
        lib::L2CValue::_L2CValue(aLStack296);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue((L2CValue *)auStack216);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack216 + 0x10));
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  FUN_710000b980(aLStack136,this);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_MOVE_DISTANCE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack152,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack168,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack184,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::operator_(aLStack168,aLStack168);
  lib::L2CValue::operator_(aLStack184,aLStack184);
  pLVar5 = aLStack248;
  lib::L2CValue::operator_(aLStack232,pLVar5);
  lib::L2CAgent::math_sqrt((L2CAgent *)auStack216,pLVar5);
  lib::L2CValue::operator_(aLStack152,(L2CValue *)(auStack216 + 0x10));
  lib::L2CValue::operator_(aLStack152,(L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack216 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack216);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,0.0);
  lib::L2CValue::operator_(aLStack152,(L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_170,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_MOVE_DISTANCE);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)(auStack216 + 0x10));
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_170);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack216 + 0x10));
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  return;
}

