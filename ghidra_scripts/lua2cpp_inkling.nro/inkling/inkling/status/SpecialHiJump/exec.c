
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiJump_exec(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  MotionNodeRotateCompose MVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  Hash40MapEntry ***this_00;
  L2CValue *pLVar6;
  L2CValue *in_x2;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  Hash40MapEntry **appHStack144 [2];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  Hash40MapEntry **local_50;
  BattleObject *pBStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_DEGREE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)appHStack144,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)appHStack144);
    uVar4 = lib::L2CValue::as_number(aLStack128);
    lVar9 = lib::L2CValue::as_number(aLStack160);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    local_50 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar9 << 0x20);
    pBStack72 = (BattleObject *)(ulong)uVar8;
    MVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_50,MVar2,0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)appHStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    lib::L2CValue::L2CValue
              ((L2CValue *)appHStack144,
               _WEAPON_INKLING_SQUID_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_ROT_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)appHStack144);
    app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar1,fVar7,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)appHStack144);
    this_00 = &local_50;
    goto LAB_710000469c;
  }
  pLVar6 = aLStack112;
  lib::L2CAgent::math_atan((L2CAgent *)aLStack96,pLVar6,in_x2);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar6);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
  lib::L2CValue::operator_((L2CValue *)appHStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar4 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) goto LAB_710000432c;
  }
  else {
LAB_710000432c:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack176,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
  HVar5 = lib::L2CValue::as_hash(aLStack176);
  uVar4 = lib::L2CValue::as_number(aLStack160);
  lVar9 = lib::L2CValue::as_number(aLStack192);
  uVar8 = lib::L2CValue::as_number(aLStack208);
  local_50 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar9 << 0x20);
  pBStack72 = (BattleObject *)(ulong)uVar8;
  MVar2 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar5,(Vector3f *)&local_50,MVar2,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_DEGREE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INKLING_SQUID_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_ROT_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar1,fVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  this_00 = appHStack144;
LAB_710000469c:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

