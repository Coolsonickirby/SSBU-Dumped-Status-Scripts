
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000281c0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  HitStatus HVar5;
  ulong uVar6;
  Hash40 HVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_RAGE_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,10);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__clear_screen_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::L2CValue(aLStack80,10);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__clear_screen_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_DISABLE_EFFECT);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar6 = lib::L2CValue::operator<(aLStack64,aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack80,0x15115d148e);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar7,-1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_INT_TARGET_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                      (FIGHTER_STATUS_BOSS_DEAD_FLAG_BOSS_STOP_SE,uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack96,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS)
        ;
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar8);
      }
      lib::L2CValue::L2CValue(aLStack128,0);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar2 = app::lua_bind::HitModule__get_whole_impl(pBVar9,iVar2);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
        lib::L2CValue::L2CValue(aLStack112,0);
        HVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
        app::lua_bind::HitModule__set_whole_impl(pBVar9,HVar5,iVar2);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

