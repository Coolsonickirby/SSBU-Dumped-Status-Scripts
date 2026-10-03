
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022790(L2CAgent *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0x13f1998734);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x195db404ca);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::L2CValue(aLStack160,-45.0);
    lib::L2CValue::L2CValue(aLStack176,45.0);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack352,1.0);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x2630d88437);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack368,fVar5);
      lib::L2CValue::operator-(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,45.0);
      lib::L2CValue::operator/(aLStack400,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::operator*(aLStack96,aLStack208);
      lib::L2CValue::operator=(aLStack96,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack416,1.0);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x262f54a202);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack432,fVar5);
      lib::L2CValue::operator-(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,45.0);
      lib::L2CValue::operator/(aLStack400,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::operator*(aLStack112,aLStack208);
      lib::L2CValue::operator=(aLStack112,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      pLVar2 = aLStack416;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x241d0826e8);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack240,fVar5);
      lib::L2CValue::L2CValue(aLStack80,45.0);
      lib::L2CValue::operator/(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0xe0);
      lib::L2CValue::operator*(aLStack96,aLStack208);
      lib::L2CValue::operator=(aLStack96,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack304,1.0);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x240b97d6dd);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack320,fVar5);
      lib::L2CValue::L2CValue(aLStack80,45.0);
      lib::L2CValue::operator/(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::operator*(aLStack112,aLStack208);
      lib::L2CValue::operator=(aLStack112,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      pLVar2 = aLStack304;
    }
    lib::L2CValue::~L2CValue(pLVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar5);
    lib::L2CValue::operator*(aLStack96,aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

