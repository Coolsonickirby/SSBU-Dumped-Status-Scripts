
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f9a0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  ulong uVar10;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar8 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_HIT);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_JUMP);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_ATTACK);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_END);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_GEKKOUGA_GEKKOUGAS_GENERATE_ARTICLE_MOON);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,_WEAPON_GEKKOUGA_GEKKOUGAS_GENERATE_ARTICLE_MOON);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__remove_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,false);
            bVar1 = lib::L2CValue::as_bool(aLStack64);
            app::lua_bind::StageManager__stage_all_stop_impl
                      (FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_4,(bool)(bVar1 & 1));
            lib::L2CValue::~L2CValue(aLStack64);
          }
          lib::L2CValue::L2CValue(aLStack64,true);
          bVar1 = lib::L2CValue::as_bool(aLStack64);
          app::FighterSpecializer_Gekkouga::set_effect_visible_group((bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_GEKKOUGA_GEKKOUGAS_LINK_NO_FINAL);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            app::LinkEvent::new_l2c_table();
            pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack64,0xca6184e65);
            lib::L2CValue::operator=(pLVar4,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_LINK_NO_FINAL);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x11f63699bf);
            pcVar6 = (code *)lib::L2CValue::as_pointer(pLVar4);
            plVar7 = (long *)(*pcVar6)();
            app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar7,aLStack80);
            app::lua_bind::LinkModule__send_event_nodes_struct_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(LinkEvent *)plVar7,0)
            ;
            app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar7);
            lib::L2CValue::L2CValue(aLStack96,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            (**(code **)(*plVar7 + 8))(plVar7);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
          lib::L2CValue::L2CValue(aLStack64,true);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
          bVar1 = lib::L2CValue::as_bool(aLStack64);
          app::WeaponSpecializer_GekkougaGekkougaS::set_link_final_end(pBVar9,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack80,0xf8e27ea85);
          lib::L2CValue::L2CValue(aLStack112,0xfdd4fcc40);
          uVar5 = lib::L2CValue::as_integer(aLStack80);
          uVar10 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar10);
          lib::L2CValue::L2CValue(aLStack64,iVar3);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
        }
      }
    }
  }
  return;
}

