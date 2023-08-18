
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::DamageFly_init(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_7100028a70;
    lib::L2CValue::L2CValue(aLStack80,0xa6d37292a);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack144,aLStack80);
  }
  else {
LAB_7100028a70:
    lib::L2CValue::L2CValue(aLStack80,0x611c8546c);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack144,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x4047e2314);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_information::damage_log_value(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x13462fcfe4);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x179c4e24c5);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1d73cd1464);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,aLStack128);
        lib::L2CValue::L2CValue(aLStack176,aLStack144);
        FUN_710002b270(this,aLStack160,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        FUN_7100029e10(this);
        goto LAB_7100028dec;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ELEC);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  ppBVar7 = &this->moduleAccessor;
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0xd7b1487d5);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_information::damage_log_value(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_HIT_STOP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,aLStack128);
  lib::L2CValue::L2CValue(aLStack176,true);
  FUN_710002b270(this,aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::KineticModule__is_enable_energy_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::StatusModule__set_keep_situation_air_impl(*ppBVar7,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100028dec:
  ppBVar7 = &this->moduleAccessor;
  lib::L2CValue::_L2CValue(aLStack96);
  fVar8 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLOAT_FLY_START_POS_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar8 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLOAT_FLY_START_POS_Y);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

