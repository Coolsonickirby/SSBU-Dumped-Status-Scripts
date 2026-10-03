
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cd60(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator-(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if (-1 < iVar3) {
    iVar6 = -1;
    do {
      lib::L2CValue::L2CValue
                (aLStack112,iVar6 + _FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_ID + 1);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x50000000);
      uVar7 = lib::L2CValue::operator==(aLStack144,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                          (LUA_SCRIPT_LINE_STATUS_SYSTEM,uVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
          if (pvVar8 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,pvVar8);
          }
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
          iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
          lib::L2CValue::L2CValue(aLStack176,iVar4);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_DAMAGE_FLY);
          uVar7 = lib::L2CValue::operator==(aLStack176,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_DAMAGE_FLY_ROLL);
            uVar7 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar7 & 1) != 0) goto LAB_710001cf74;
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR);
            uVar7 = lib::L2CValue::operator==(aLStack176,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar7 & 1) != 0) goto LAB_710001cf74;
          }
          else {
LAB_710001cf74:
            lib::L2CValue::L2CValue
                      (aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP_BUTTON);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_CEIL);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_FB);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar9,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
          }
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
        }
      }
      lib::L2CValue::~L2CValue(aLStack144);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar6 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar6);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

