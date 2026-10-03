
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100043240(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,0x118d74daa0);
    lib::L2CValue::L2CValue(aLStack176,0xbd243b832);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::operator=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_WAIT_SHOOT);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SHOOT_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SHOOT_NUM);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack176,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_WATER_UP);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator==(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
          lib::L2CValue::L2CValue(aLStack160,0x13f2e2f8e7);
          lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,14.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,-90.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,1.0);
          lib::L2CValue::L2CValue(aLStack320,true);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack160);
          lib::L2CAgent::push_lua_stack(param_2,aLStack176);
          lib::L2CAgent::push_lua_stack(param_2,aLStack208);
          lib::L2CAgent::push_lua_stack(param_2,aLStack224);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack256);
          lib::L2CAgent::push_lua_stack(param_2,aLStack272);
          lib::L2CAgent::push_lua_stack(param_2,aLStack288);
          lib::L2CAgent::push_lua_stack(param_2,aLStack304);
          lib::L2CAgent::push_lua_stack(param_2,aLStack320);
          app::sv_module_access::effect(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          this = aLStack352;
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
          lib::L2CValue::L2CValue(aLStack160,0x13f2e2f8e7);
          lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,7.0);
          lib::L2CValue::L2CValue(aLStack240,4.5);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,1.0);
          lib::L2CValue::L2CValue(aLStack320,true);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack160);
          lib::L2CAgent::push_lua_stack(param_2,aLStack176);
          lib::L2CAgent::push_lua_stack(param_2,aLStack208);
          lib::L2CAgent::push_lua_stack(param_2,aLStack224);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack256);
          lib::L2CAgent::push_lua_stack(param_2,aLStack272);
          lib::L2CAgent::push_lua_stack(param_2,aLStack288);
          lib::L2CAgent::push_lua_stack(param_2,aLStack304);
          lib::L2CAgent::push_lua_stack(param_2,aLStack320);
          app::sv_module_access::effect(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
          lib::L2CValue::L2CValue(aLStack160,0x13f2e2f8e7);
          lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,7.0);
          lib::L2CValue::L2CValue(aLStack240,-4.5);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,180.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,1.0);
          lib::L2CValue::L2CValue(aLStack320,true);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack160);
          lib::L2CAgent::push_lua_stack(param_2,aLStack176);
          lib::L2CAgent::push_lua_stack(param_2,aLStack208);
          lib::L2CAgent::push_lua_stack(param_2,aLStack224);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack256);
          lib::L2CAgent::push_lua_stack(param_2,aLStack272);
          lib::L2CAgent::push_lua_stack(param_2,aLStack288);
          lib::L2CAgent::push_lua_stack(param_2,aLStack304);
          lib::L2CAgent::push_lua_stack(param_2,aLStack320);
          app::sv_module_access::effect(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          this = aLStack336;
        }
        lib::L2CValue::~L2CValue(this);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_WATER_UP)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack160,0x118d74daa0);
    lib::L2CValue::L2CValue(aLStack176,0x126ece755e);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lVar1 = -0x90;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,0x118d74daa0);
      lib::L2CValue::L2CValue(aLStack240,0xd0be058ac);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,iVar4);
      uVar5 = lib::L2CValue::operator<(aLStack128,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar5 & 1) == 0) goto LAB_7100043ab4;
      lib::L2CValue::L2CValue(aLStack80,0x3455551adc);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack368);
      lVar1 = -0x40;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_7100043ab4:
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_WAIT_SHOOT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    FUN_710003a910(param_2);
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

