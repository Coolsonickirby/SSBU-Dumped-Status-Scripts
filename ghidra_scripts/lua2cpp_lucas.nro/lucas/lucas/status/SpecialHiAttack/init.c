
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialHiAttack_init(L2CFighterLucas *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CAgent *this_00;
  Hash40 HVar10;
  ulong *puVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_DIR);
  lib::L2CValue::L2CValue(aLStack336,0xcd16a7bf2);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_ATTACK_AIR);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KINETIC_TYPE_LUCAS_SPECIAL_HI_ATTACK);
  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_KINETIC_TYPE_LUCAS_SPECIAL_AIR_HI_ATTACK);
  lib::L2CValue::L2CValue(aLStack400,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_TARGET_ANGLE);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_START_ANGLE);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  iVar4 = lib::L2CValue::as_integer(aLStack320);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  cVar1 = (char)&stack0xfffffffffffffff0;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar1 + 'p'),(L2CValue)(cVar1 + '`'));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack336);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,uVar6,(ulong)pLVar7);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer(aLStack352);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_GROUND);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + '@'));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::operator_(aLStack192,aLStack112);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
    lVar14 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),SITUATION_KIND_AIR);
    pLVar8 = (L2CValue *)(auStack224 + 0x10);
    lua2cpp::L2CFighterBase::set_situation(this,SUB81(pLVar8,0));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CAgent::math_cos((L2CAgent *)aLStack128,pLVar8);
    lib::L2CValue::operator_(aLStack192,aLStack240);
    lib::L2CValue::operator_((L2CValue *)auStack224,aLStack112);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    puVar11 = &local_60;
    lib::L2CValue::operator_(pLVar8,(L2CValue *)puVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack128,(L2CValue *)puVar11);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)auStack224);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lVar14 = -0xd0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar9);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  iVar4 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  if ((uVar6 & 1) == 0) {
    iVar4 = lib::L2CValue::as_integer(aLStack384);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
  }
  else {
    iVar4 = lib::L2CValue::as_integer(aLStack368);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
  }
  this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::operator_(pLVar8,aLStack112);
  lib::L2CAgent::math_atan(this_00,(L2CValue *)&local_60,pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar7 = (L2CValue *)0x31d39a761;
  lib::L2CValue::L2CValue(aLStack240,0x31d39a761);
  lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar7);
  lib::L2CValue::operator_(aLStack272);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  HVar10 = lib::L2CValue::as_hash(aLStack240);
  uVar6 = lib::L2CValue::as_number(aLStack256);
  lVar14 = lib::L2CValue::as_number(aLStack288);
  uVar13 = lib::L2CValue::as_number(aLStack304);
  local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar13;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar10,(Vector3f *)&local_60,0,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer(aLStack400);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer(aLStack416);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

