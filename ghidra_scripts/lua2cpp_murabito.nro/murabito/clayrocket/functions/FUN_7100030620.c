
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100030620(L2CAgent *param_1,L2CAgent *param_2,L2CAgent *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CAgent *pLVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar7 = param_3;
  lib::L2CAgent::math_abs(param_2,(L2CValue *)param_2);
  lib::L2CValue::L2CValue(aLStack80,0.0001);
  pLVar5 = aLStack96;
  uVar4 = lib::L2CValue::operator<(aLStack80,pLVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CAgent::math_abs(param_3,pLVar5);
    lib::L2CValue::L2CValue(aLStack80,0.0001);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack96);
  }
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::operator*((L2CValue *)param_2,aLStack96);
  lib::L2CAgent::math_atan(param_3,aLStack80,(L2CValue *)pLVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,-1.0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,-0.6);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0x2c24e2b095);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_GRAVITY_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::operator-(aLStack128,aLStack144);
    lib::L2CValue::operator=(aLStack128,aLStack80);
  }
  else {
    lib::L2CValue::operator+(aLStack128,aLStack144);
    lib::L2CValue::operator=(aLStack128,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  uVar4 = lib::L2CValue::operator<(aLStack112,aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_LOCK_DIRECTION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::operator=(aLStack112,aLStack128);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_LOCK_DIRECTION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_MODEL_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator-(aLStack112,aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack176);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,0x10d78ab4d3);
    lib::L2CValue::L2CValue(aLStack208,0x13117df4aa);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    pLVar5 = aLStack80;
    lib::L2CValue::operator=((L2CValue *)auStack176,pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,0x10d78ab4d3);
    lib::L2CValue::L2CValue(aLStack208,0x16f54bab92);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    pLVar5 = aLStack80;
    lib::L2CValue::operator=((L2CValue *)auStack176,pLVar5);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar5);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator-(aLStack192);
      uVar4 = lib::L2CValue::operator<(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator-(aLStack192);
        lib::L2CValue::operator=(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
  }
  else {
    uVar4 = lib::L2CValue::operator<(aLStack192,aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator=(aLStack144,aLStack192);
    }
  }
  lib::L2CValue::operator+(aLStack128,aLStack144);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_MODEL_ANGLE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack208);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,0x292bc5cec3);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

