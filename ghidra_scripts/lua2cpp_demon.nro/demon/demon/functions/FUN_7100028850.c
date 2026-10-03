
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028850(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  HitStatus HVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,uVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                      (FIGHTER_STATUS_BOSS_DEAD_FLAG_BOSS_STOP_SE,uVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      uVar3 = lib::L2CValue::as_integer(aLStack80);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack96,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS)
        ;
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar7);
      }
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_INT_TARGET_HIT_STATUS);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
        iVar2 = app::lua_bind::HitModule__get_whole_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack64,iVar2);
        uVar6 = lib::L2CValue::operator==(aLStack64,aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0);
          HVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
          app::lua_bind::HitModule__set_whole_impl(pBVar8,HVar4,iVar2);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_INT_TARGET_ID);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar5);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,-1);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_INT_TARGET_HIT_STATUS);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar5);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack64);
        }
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

