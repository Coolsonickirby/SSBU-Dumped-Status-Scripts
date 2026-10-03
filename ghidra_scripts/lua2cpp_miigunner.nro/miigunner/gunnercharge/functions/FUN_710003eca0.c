
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003eca0(L2CAgent *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_MIIGUNNER_GUNNERCHARGE_STATUS_KIND_CHARGE);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator=(aLStack224,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator=(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator=(aLStack176,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,MA_MSC_EFFECT_SET_POS);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack64);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack176);
      app::sv_module_access::effect(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_MA_MSC_EFFECT_SET_ROT);
      lib::L2CValue::L2CValue(aLStack240,-90.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack64);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      app::sv_module_access::effect(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET_FOLLOW);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::operator=(aLStack192,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator==(aLStack192,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) goto LAB_710003f430;
    lib::L2CValue::L2CValue(aLStack64,MA_MSC_EFFECT_SET_POS);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_MA_MSC_EFFECT_SET_ROT);
    lib::L2CValue::L2CValue(aLStack240,-90.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    lib::L2CAgent::push_lua_stack(param_1,aLStack304);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    pLVar2 = aLStack368;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE_OFFSET_X);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack224,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE_OFFSET_Y);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE_OFFSET_Z);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack176,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_TRANS_JOINT_SCALE);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack208,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::operator*(aLStack224,aLStack208);
    lib::L2CValue::operator=(aLStack224,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator*(aLStack128,aLStack208);
    lib::L2CValue::operator=(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator*(aLStack176,aLStack208);
    lib::L2CValue::operator=(aLStack176,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET);
    iVar1 = lib::L2CValue::as_integer(aLStack240);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) goto LAB_710003f430;
    lib::L2CValue::L2CValue(aLStack64,MA_MSC_EFFECT_SET_POS);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_MA_MSC_EFFECT_SET_ROT);
    lib::L2CValue::L2CValue(aLStack240,-80.0);
    lib::L2CValue::L2CValue(aLStack288,90.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    lib::L2CAgent::push_lua_stack(param_1,aLStack304);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    pLVar2 = aLStack272;
  }
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710003f430:
  lib::L2CValue::L2CValue(aLStack240,0x12638bad86);
  lib::L2CValue::L2CValue(aLStack288,0x988b496ce);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  uVar4 = lib::L2CValue::as_integer(aLStack288);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::operator=(aLStack144,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0x12638bad86);
  lib::L2CValue::L2CValue(aLStack288,0x95f5f248f);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  uVar4 = lib::L2CValue::as_integer(aLStack288);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::operator=(aLStack160,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::operator-(aLStack160,aLStack144);
  lib::L2CValue::operator*(aLStack288,aLStack96);
  lib::L2CValue::operator+(aLStack240,aLStack144);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,MA_MSC_EFFECT_SET_SCALE);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue
            (aLStack240,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET_FOLLOW);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack192,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator==(aLStack192,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,MA_MSC_EFFECT_SET_SCALE);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

