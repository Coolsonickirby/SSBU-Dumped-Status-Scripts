
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c940(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  FighterModuleAccessor *pFVar6;
  code *pcVar7;
  long *plVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_END);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::FighterSpecializer_Reflet::charge_points(pFVar6);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar5);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_HIT);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_MOVE);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_READY);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_ATTACK);
        uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_END);
          uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_FINAL);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar1 = app::lua_bind::LinkModule__is_linked_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((bVar2 & 1U) == 0) goto LAB_710001cc04;
            app::LinkEvent::new_l2c_table();
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack64,0xca6184e65);
            lib::L2CValue::operator=(pLVar5,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LINK_NO_FINAL);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x11f63699bf);
            pcVar7 = (code *)lib::L2CValue::as_pointer(pLVar5);
            plVar8 = (long *)(*pcVar7)();
            app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar8,aLStack96);
            app::lua_bind::LinkModule__send_event_nodes_struct_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(LinkEvent *)plVar8,0)
            ;
            app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar8);
            lib::L2CValue::L2CValue(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            (**(code **)(*plVar8 + 8))(plVar8);
            lib::L2CValue::operator=(aLStack96,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
          }
        }
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710001cc04:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

