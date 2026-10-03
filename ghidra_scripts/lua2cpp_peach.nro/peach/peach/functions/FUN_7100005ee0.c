
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005ee0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  fVar7 = (float)app::lua_bind::ControlModule__get_stick_dir_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::L2CValue(aLStack96,0xc27ffd62e);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  bVar1 = app::lua_bind::MotionModule__is_anim_resource_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0x16c96174bd);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar4 = lib::L2CValue::operator<(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_SMASH_ITEM_PAN);
      lib::L2CValue::operator=(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xaf2a275a2);
      lib::L2CValue::L2CValue(aLStack96,0xe4aed886f);
      HVar3 = lib::L2CValue::as_hash(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::VisibilityModule__set_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3,HVar6);
      goto LAB_7100006244;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0xcb99c2e49);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  bVar1 = app::lua_bind::MotionModule__is_anim_resource_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0x1657028cda);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_SMASH_ITEM_RACKET);
      lib::L2CValue::operator=(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xaf2a275a2);
      lib::L2CValue::L2CValue(aLStack96,0x1125e9ae13);
      HVar3 = lib::L2CValue::as_hash(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::VisibilityModule__set_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3,HVar6);
      goto LAB_7100006244;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_SMASH_ITEM_CLUB);
  lib::L2CValue::operator=(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xaf2a275a2);
  lib::L2CValue::L2CValue(aLStack96,0xf4fbbde00);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::VisibilityModule__set_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3,HVar6);
LAB_7100006244:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

