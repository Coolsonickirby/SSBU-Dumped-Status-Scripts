
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009410(L2CFighterCommon *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,9);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_F);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_B);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_7100009a98;
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    fVar5 = (float)app::sv_fighter_util::get_walk_speed_mul(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack400,fVar5);
    lib::L2CValue::L2CValue(aLStack160,0x144b518bb3);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::L2CValue(aLStack240,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack256,0x14efa045eb);
    uVar3 = lib::L2CValue::as_integer(aLStack240);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack208,fVar5);
    lib::L2CValue::operator*(aLStack144,aLStack208);
    lib::L2CValue::L2CValue(aLStack304,0x145c87aa5f);
    lib::L2CValue::L2CValue(aLStack320,0);
    uVar3 = lib::L2CValue::as_integer(aLStack304);
    uVar4 = lib::L2CValue::as_integer(aLStack320);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack432,fVar5);
    lib::L2CValue::L2CValue(aLStack464,0x14089ff819);
    lib::L2CValue::L2CValue(aLStack480,0);
    uVar3 = lib::L2CValue::as_integer(aLStack464);
    uVar4 = lib::L2CValue::as_integer(aLStack480);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack448,fVar5);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack528,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack544,0xef53a098c);
    uVar3 = lib::L2CValue::as_integer(aLStack528);
    uVar4 = lib::L2CValue::as_integer(aLStack544);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack512,fVar5);
    lib::L2CValue::L2CValue(aLStack560,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack576,aLStack80);
    lib::L2CValue::L2CValue(aLStack592,true);
    lua2cpp::L2CFighterCommon::calc_walk_speed
              (param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x10,
               (L2CValue)0x0,(L2CValue)0xd0,SUB81(aLStack576,0),SUB81((ulong)aLStack576 >> 0x20,0));
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack64);
    fVar5 = (float)app::lua_bind::PostureModule__scale_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator/(aLStack80,aLStack64);
    lua2cpp::L2CFighterCommon::item_shoot_walk_set_motion_rate_New(param_1,(L2CValue)0xa0);
    pLVar2 = aLStack608;
  }
  else {
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    fVar5 = (float)app::sv_fighter_util::get_walk_speed_mul(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::L2CValue(aLStack144,0x144b518bb3);
    lib::L2CValue::L2CValue(aLStack160,0);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    lib::L2CValue::L2CValue(aLStack192,0x145c87aa5f);
    lib::L2CValue::L2CValue(aLStack208,0);
    uVar3 = lib::L2CValue::as_integer(aLStack192);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack176,fVar5);
    lib::L2CValue::L2CValue(aLStack240,0x14089ff819);
    lib::L2CValue::L2CValue(aLStack256,0);
    uVar3 = lib::L2CValue::as_integer(aLStack240);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack224,fVar5);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack304,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack320,0xef53a098c);
    uVar3 = lib::L2CValue::as_integer(aLStack304);
    uVar4 = lib::L2CValue::as_integer(aLStack320);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack288,fVar5);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack352,aLStack80);
    lib::L2CValue::L2CValue(aLStack368,true);
    lua2cpp::L2CFighterCommon::calc_walk_speed
              (param_1,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x50,(L2CValue)0x20,(L2CValue)0xf0,
               (L2CValue)0xe0,(L2CValue)0xb0,SUB81(aLStack352,0),SUB81((ulong)aLStack352 >> 0x20,0))
    ;
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    fVar5 = (float)app::lua_bind::PostureModule__scale_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator/(aLStack80,aLStack64);
    lua2cpp::L2CFighterCommon::item_shoot_walk_set_motion_rate_New(param_1,(L2CValue)0x80);
    pLVar2 = aLStack384;
  }
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100009a98:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

