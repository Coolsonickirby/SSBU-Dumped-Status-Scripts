
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002237e0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  Hash40 HVar9;
  int iVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINAL_CHANGE_STATUS_NUM);
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
    iVar10 = -1;
    do {
      lib::L2CValue::L2CValue
                (aLStack112,iVar10 + _FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINAL_CHANGE_STATUS_ID_1 + 1)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::sv_battle_object::is_active(uVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar5);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,pvVar6);
        }
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
        iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack160,iVar4);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_KIRBY_FINAL_CAPTURE);
        uVar8 = lib::L2CValue::operator==(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_LINK_NO_FINAL);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::LinkModule__link_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_LINK_NO_FINAL);
          lib::L2CValue::L2CValue(aLStack160,0xca6184e65);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          HVar9 = lib::L2CValue::as_hash(aLStack160);
          app::lua_bind::LinkModule__send_event_parents_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,HVar9);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_LINK_NO_FINAL);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::LinkModule__unlink_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      lib::L2CValue::~L2CValue(aLStack144);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

