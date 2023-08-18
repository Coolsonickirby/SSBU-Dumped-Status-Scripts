
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Ref_main(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  HitStatus HVar4;
  AttackData *pAVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  pAVar5 = (AttackData *)
           app::lua_bind::AttackModule__attack_data_impl
                     (this->moduleAccessor,iVar2,(bool)(bVar1 & 1));
  app::lua_bind::AttackData__store_l2c_table_impl(pAVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  fVar12 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  pAVar5 = (AttackData *)
           app::lua_bind::AttackModule__attack_data_impl
                     (this->moduleAccessor,iVar2,(bool)(bVar1 & 1));
  app::lua_bind::AttackData__store_l2c_table_impl(pAVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x58446eb8a);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x58446eb8a);
  lib::L2CValue::operator_(this_00,pLVar7);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::AttackModule__group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x11f63699bf);
  pcVar8 = (code *)lib::L2CValue::as_pointer(pLVar7);
  pAVar5 = (AttackData *)(*pcVar8)();
  app::lua_bind::AttackData__load_from_l2c_table_impl(pAVar5,aLStack112);
  app::lua_bind::AttackModule__set_attack_impl(this->moduleAccessor,iVar2,iVar3,pAVar5);
  operator_delete(pAVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_XLU);
  HVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_REFLECT_X);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_REFLECT_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  fVar12 = (float)lib::L2CValue::as_number(aLStack160);
  fVar11 = (float)app::sv_math::vec2_length(fVar11,fVar12);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar9 = lib::L2CValue::operator_(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0xc6fcf7624);
    lib::L2CValue::L2CValue(aLStack192,0x13fd73f072);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar9,uVar10);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack176,0xc6fcf7624);
  lib::L2CValue::L2CValue(aLStack192,0x1347ad3249);
  uVar9 = lib::L2CValue::as_integer(aLStack176);
  uVar10 = lib::L2CValue::as_integer(aLStack192);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLAG_REFLECT);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,Ref_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

