
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialS_init(L2CFighterGamewatch *this,L2CValue *return_value)

{
  Hash40Map *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  FighterEntryID FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Hash40 HVar8;
  ulong uVar9;
  void *pvVar10;
  FighterInformation *pFVar11;
  undefined ***pppuVar12;
  L2CValue *pLVar13;
  long lVar14;
  long lVar15;
  BattleObjectModuleAccessor *pBVar16;
  ulong uVar17;
  L2CValue *pLVar18;
  L2CTable *pLVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  code *pcVar22;
  BattleObjectModuleAccessor **ppBVar23;
  float fVar24;
  undefined8 uVar25;
  undefined **local_210 [4];
  undefined ***local_1f0;
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  undefined **appuStack344 [2];
  undefined **appuStack328 [2];
  L2CValue aLStack312 [16];
  undefined **appuStack296 [2];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  undefined **appuStack120 [3];
  
  lib::L2CValue::L2CValue
            ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PREV_KIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
  ppBVar23 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar3);
  lib::L2CValue::L2CValue(aLStack248,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar3);
  lib::L2CValue::L2CValue(aLStack264,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  HVar8 = app::sv_global_parameter::melee_rule_mode();
  lib::L2CValue::L2CValue(aLStack280,HVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_210,0x1dbcd0f8e6);
  uVar9 = lib::L2CValue::operator__(aLStack280,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_210,-1);
    uVar9 = lib::L2CValue::operator__(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_210,8);
      uVar9 = lib::L2CValue::operator__(aLStack248,(L2CValue *)local_210);
      lib::L2CValue::_L2CValue((L2CValue *)local_210);
      if ((uVar9 & 1) == 0) {
        iVar3 = app::sv_information::get_remaining_time_as_frame();
        lib::L2CValue::L2CValue((L2CValue *)appuStack120,iVar3);
        lib::L2CValue::L2CValue(aLStack168,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack184,0xfd91dd935);
        uVar9 = lib::L2CValue::as_integer(aLStack168);
        uVar17 = lib::L2CValue::as_integer(aLStack184);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar23,uVar9,uVar17);
        lib::L2CValue::L2CValue(aLStack152,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)local_210,0x3c);
        lib::L2CValue::operator_(aLStack152,(L2CValue *)local_210);
        lib::L2CValue::_L2CValue((L2CValue *)local_210);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::L2CValue((L2CValue *)local_210,0);
        uVar9 = lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack120);
        lib::L2CValue::_L2CValue((L2CValue *)local_210);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = lib::L2CValue::operator__((L2CValue *)appuStack120,aLStack136), (uVar9 & 1) != 0
           )) {
          lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar3);
          lib::L2CValue::L2CValue(aLStack152,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          FVar4 = lib::L2CValue::as_integer(aLStack152);
          pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                      (LUA_SCRIPT_LINE_MAP_CORRECTION,FVar4);
          lib::L2CValue::L2CValue(aLStack168,pvVar10);
          lib::L2CValue::L2CValue((L2CValue *)local_210,0);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
          iVar3 = app::lua_bind::FighterManager__get_top_rank_player_impl
                            (LUA_SCRIPT_LINE_MAP_CORRECTION,iVar3);
          lib::L2CValue::L2CValue(aLStack184,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          FVar4 = lib::L2CValue::as_integer(aLStack184);
          pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                      (LUA_SCRIPT_LINE_MAP_CORRECTION,FVar4);
          lib::L2CValue::L2CValue(aLStack200,pvVar10);
          HVar8 = app::sv_global_parameter::melee_rule_type();
          lib::L2CValue::L2CValue(aLStack216,HVar8);
          lib::L2CValue::L2CValue(aLStack232,false);
          lib::L2CValue::L2CValue((L2CValue *)local_210,0x16586570f3);
          uVar9 = lib::L2CValue::operator__(aLStack216,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_210,0x176903b131);
            uVar9 = lib::L2CValue::operator__(aLStack216,(L2CValue *)local_210);
            lib::L2CValue::_L2CValue((L2CValue *)local_210);
            if ((uVar9 & 1) != 0) {
              uVar9 = lib::L2CValue::operator__(aLStack152,aLStack184);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_210,false);
                lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
                goto LAB_7100005480;
              }
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack168);
              iVar3 = app::lua_bind::FighterInformation__stock_count_impl(pFVar11);
              lib::L2CValue::L2CValue((L2CValue *)appuStack296,iVar3);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack200);
              iVar3 = app::lua_bind::FighterInformation__stock_count_impl(pFVar11);
              lib::L2CValue::L2CValue(aLStack312,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)local_210,2);
              lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack296);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              bVar1 = lib::L2CValue::operator__((L2CValue *)appuStack328,aLStack312);
              lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
              lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
LAB_7100005950:
              pppuVar12 = local_210;
LAB_7100005954:
              lib::L2CValue::_L2CValue((L2CValue *)pppuVar12);
              pppuVar12 = appuStack328;
              goto LAB_710000595c;
            }
            lib::L2CValue::L2CValue((L2CValue *)local_210,0x14b677f115);
            uVar9 = lib::L2CValue::operator__(aLStack216,(L2CValue *)local_210);
            lib::L2CValue::_L2CValue((L2CValue *)local_210);
            if ((uVar9 & 1) != 0) {
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack168);
              iVar3 = app::lua_bind::FighterInformation__stock_count_impl(pFVar11);
              lib::L2CValue::L2CValue((L2CValue *)appuStack296,iVar3);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack200);
              iVar3 = app::lua_bind::FighterInformation__stock_count_impl(pFVar11);
              lib::L2CValue::L2CValue(aLStack312,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)local_210,1);
              uVar9 = lib::L2CValue::operator_((L2CValue *)local_210,aLStack312);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_210,2);
                lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack296);
                lib::L2CValue::_L2CValue((L2CValue *)local_210);
                bVar1 = lib::L2CValue::operator__((L2CValue *)appuStack328,aLStack312);
                lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
                lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
                goto LAB_7100005950;
              }
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack168);
              fVar24 = (float)app::lua_bind::FighterInformation__hit_point_impl(pFVar11);
              lib::L2CValue::L2CValue((L2CValue *)appuStack328,fVar24);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack200);
              fVar24 = (float)app::lua_bind::FighterInformation__hit_point_impl(pFVar11);
              lib::L2CValue::L2CValue((L2CValue *)appuStack344,fVar24);
              uVar9 = lib::L2CValue::operator__(aLStack152,aLStack184);
              if ((uVar9 & 1) != 0) {
                uVar6 = app::lua_bind::FighterManager__get_top_rank_player_num_impl
                                  (LUA_SCRIPT_LINE_MAP_CORRECTION);
                lib::L2CValue::L2CValue(aLStack360,uVar6 & 0xff);
                lib::L2CValue::L2CValue((L2CValue *)local_210,1);
                lib::L2CValue::operator_(aLStack360,(L2CValue *)local_210);
                lib::L2CValue::_L2CValue((L2CValue *)local_210);
                iVar3 = lib::L2CValue::as_integer(aLStack376);
                lib::L2CValue::_L2CValue(aLStack376);
                if (0 < iVar3) {
                  iVar7 = 0;
                  do {
                    lib::L2CValue::L2CValue(aLStack376,iVar7 + 1);
                    iVar5 = lib::L2CValue::as_integer(aLStack376);
                    iVar5 = app::lua_bind::FighterManager__get_top_rank_player_impl
                                      (LUA_SCRIPT_LINE_MAP_CORRECTION,iVar5);
                    lib::L2CValue::L2CValue((L2CValue *)local_210,iVar5);
                    lib::L2CValue::_L2CValue(aLStack376);
                    FVar4 = lib::L2CValue::as_integer((L2CValue *)local_210);
                    pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                                (LUA_SCRIPT_LINE_MAP_CORRECTION,FVar4);
                    lib::L2CValue::L2CValue(aLStack376,pvVar10);
                    pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack376);
                    fVar24 = (float)app::lua_bind::FighterInformation__hit_point_impl(pFVar11);
                    lib::L2CValue::L2CValue(aLStack392,fVar24);
                    uVar9 = lib::L2CValue::operator_((L2CValue *)appuStack344,aLStack392);
                    if ((uVar9 & 1) != 0) {
                      lib::L2CValue::operator_((L2CValue *)appuStack344,aLStack392);
                    }
                    lib::L2CValue::_L2CValue(aLStack392);
                    lib::L2CValue::_L2CValue(aLStack376);
                    lib::L2CValue::_L2CValue((L2CValue *)local_210);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar3);
                }
                lib::L2CValue::_L2CValue(aLStack360);
              }
              lib::L2CValue::L2CValue((L2CValue *)local_210,2);
              lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack328);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              bVar1 = lib::L2CValue::operator__(aLStack360,(L2CValue *)appuStack344);
              lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
              lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              lib::L2CValue::_L2CValue(aLStack360);
              pppuVar12 = appuStack344;
              goto LAB_7100005954;
            }
          }
          else {
            uVar9 = lib::L2CValue::operator__(aLStack152,aLStack184);
            if ((uVar9 & 1) == 0) {
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack168);
              iVar3 = app::lua_bind::FighterInformation__total_beat_count_impl(pFVar11,-2);
              lib::L2CValue::L2CValue((L2CValue *)local_210,iVar3);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack168);
              uVar6 = app::lua_bind::FighterInformation__suicide_count_impl(pFVar11,-2);
              lib::L2CValue::L2CValue(aLStack312,uVar6 & 0xffff);
              lib::L2CValue::operator_((L2CValue *)local_210,aLStack312);
              lib::L2CValue::_L2CValue(aLStack312);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack200);
              iVar3 = app::lua_bind::FighterInformation__total_beat_count_impl(pFVar11,-2);
              lib::L2CValue::L2CValue((L2CValue *)local_210,iVar3);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack200);
              uVar6 = app::lua_bind::FighterInformation__suicide_count_impl(pFVar11,-2);
              lib::L2CValue::L2CValue((L2CValue *)appuStack328,uVar6 & 0xffff);
              lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack328);
              lib::L2CValue::_L2CValue((L2CValue *)appuStack328);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              lib::L2CValue::L2CValue((L2CValue *)local_210,0);
              uVar9 = lib::L2CValue::operator__((L2CValue *)appuStack296,(L2CValue *)local_210);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              if ((uVar9 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_210,0);
                uVar9 = lib::L2CValue::operator__((L2CValue *)appuStack296,(L2CValue *)local_210);
                lib::L2CValue::_L2CValue((L2CValue *)local_210);
                if ((uVar9 & 1) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)local_210,2);
                  lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack296);
                  lib::L2CValue::_L2CValue((L2CValue *)local_210);
                  bVar1 = lib::L2CValue::operator__((L2CValue *)appuStack328,aLStack312);
                  lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
                  lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)local_210,0.5);
                  lib::L2CValue::operator_((L2CValue *)local_210,(L2CValue *)appuStack296);
                  lib::L2CValue::_L2CValue((L2CValue *)local_210);
                  bVar1 = lib::L2CValue::operator__((L2CValue *)appuStack328,aLStack312);
                  lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
                  lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
                }
                goto LAB_7100005950;
              }
              lib::L2CValue::L2CValue((L2CValue *)local_210,0);
              bVar1 = lib::L2CValue::operator_((L2CValue *)local_210,aLStack312);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
              lib::L2CValue::L2CValue((L2CValue *)local_210,(bool)(bVar1 & 1));
              lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
              pppuVar12 = local_210;
LAB_710000595c:
              lib::L2CValue::_L2CValue((L2CValue *)pppuVar12);
              lib::L2CValue::_L2CValue(aLStack312);
              pppuVar12 = appuStack296;
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)local_210,false);
              lib::L2CValue::operator_(aLStack232,(L2CValue *)local_210);
LAB_7100005480:
              pppuVar12 = local_210;
            }
            lib::L2CValue::_L2CValue((L2CValue *)pppuVar12);
          }
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack232);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_210,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack312,0xa6fcf1cd0);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)local_210);
            uVar17 = lib::L2CValue::as_integer(aLStack312);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar23,uVar9,uVar17);
            lib::L2CValue::L2CValue((L2CValue *)appuStack296,iVar3);
            lib::L2CValue::_L2CValue(aLStack312);
            lib::L2CValue::_L2CValue((L2CValue *)local_210);
            lib::L2CValue::L2CValue((L2CValue *)local_210,0x77a08c3fc);
            lib::L2CValue::L2CValue((L2CValue *)appuStack328,100);
            HVar8 = lib::L2CValue::as_hash((L2CValue *)local_210);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)appuStack328);
            uVar6 = app::sv_math::rand(HVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack312,uVar6);
            lib::L2CValue::_L2CValue((L2CValue *)appuStack328);
            lib::L2CValue::_L2CValue((L2CValue *)local_210);
            uVar9 = lib::L2CValue::operator_(aLStack312,(L2CValue *)appuStack296);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)local_210,8);
              lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
              lib::L2CValue::_L2CValue((L2CValue *)local_210);
            }
            lib::L2CValue::_L2CValue(aLStack312);
            lib::L2CValue::_L2CValue((L2CValue *)appuStack296);
          }
          lib::L2CValue::_L2CValue(aLStack232);
          lib::L2CValue::_L2CValue(aLStack216);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::_L2CValue(aLStack184);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack152);
        }
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)local_210,-1);
    uVar9 = lib::L2CValue::operator__(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    if ((uVar9 & 1) != 0) {
      if (((DAT_7100159a98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159a98), iVar3 != 0))
      {
        pLVar19 = (L2CTable *)operator_new(0x48);
        lib::L2CTable::L2CTable(pLVar19,9);
        lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a38,pLVar19);
        lib::L2CValue::L2CValue((L2CValue *)local_210,0x7b5666e52);
        lib::L2CValue::L2CValue((L2CValue *)appuStack120,0x72c6f3fe8);
        lib::L2CValue::L2CValue(aLStack136,0x75b680f7e);
        lib::L2CValue::L2CValue(aLStack152,0x7c50c9add);
        lib::L2CValue::L2CValue(aLStack168,0x7b20baa4b);
        lib::L2CValue::L2CValue(aLStack184,0x72b02fbf1);
        lib::L2CValue::L2CValue(aLStack200,0x75c05cb67);
        lib::L2CValue::L2CValue(aLStack216,0x7ccbad6f6);
        lib::L2CValue::L2CValue(aLStack232,0x7bbbde660);
        FUN_7100008560(&DAT_7100159a38,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                       aLStack184,aLStack200,aLStack216,aLStack232);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
        lib::L2CValue::_L2CValue((L2CValue *)local_210);
        FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a38,&PTR_LOOP_7100157000);
        __cxa_guard_release(&DAT_7100159a98);
      }
      pLVar19 = (L2CTable *)operator_new(0x48);
      lib::L2CTable::L2CTable(pLVar19,0);
      lib::L2CValue::L2CValue((L2CValue *)appuStack120,pLVar19);
      pLVar19 = (L2CTable *)operator_new(0x48);
      lib::L2CTable::L2CTable(pLVar19,0);
      lib::L2CValue::L2CValue(aLStack136,pLVar19);
      lib::L2CValue::L2CValue(aLStack152,0);
      lib::L2CValue::L2CValue(aLStack168,0);
      uVar6 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack184,0);
        lib::L2CValue::L2CValue((L2CValue *)local_210,uVar6);
        uVar9 = lib::L2CValue::operator__((L2CValue *)local_210,aLStack248);
        lib::L2CValue::_L2CValue((L2CValue *)local_210);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack200,0xfea97fe73);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&DAT_7100159a38,uVar6 + 1);
          uVar9 = lib::L2CValue::as_integer(aLStack200);
          uVar17 = lib::L2CValue::as_integer(pLVar13);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar23,uVar9,uVar17);
          lib::L2CValue::L2CValue((L2CValue *)local_210,iVar3);
          lib::L2CValue::operator_(aLStack184,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          lib::L2CValue::_L2CValue(aLStack200);
        }
        if (uVar6 == 6) {
          lib::L2CValue::L2CValue
                    (aLStack216,
                     _FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PANEL_7_INVALID_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack216);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar23,iVar3);
          lib::L2CValue::L2CValue(aLStack200,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)local_210,0);
          uVar9 = lib::L2CValue::operator_((L2CValue *)local_210,aLStack200);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::_L2CValue(aLStack216);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_210,0);
            lib::L2CValue::operator_(aLStack184,(L2CValue *)local_210);
            lib::L2CValue::_L2CValue((L2CValue *)local_210);
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)local_210,0);
        uVar9 = lib::L2CValue::operator_((L2CValue *)local_210,aLStack184);
        lib::L2CValue::_L2CValue((L2CValue *)local_210);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::operator_(aLStack152,aLStack184);
          lib::L2CValue::operator_(aLStack152,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          lib::L2CValue::L2CValue((L2CValue *)local_210,1);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,aLStack200);
          lib::L2CValue::L2CValue((L2CValue *)local_210,uVar6);
          lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::L2CValue((L2CValue *)local_210,1);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack136,aLStack200);
          lib::L2CValue::operator_(pLVar13,aLStack152);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::L2CValue((L2CValue *)local_210,1);
          lib::L2CValue::operator_(aLStack168,(L2CValue *)local_210);
          lib::L2CValue::_L2CValue((L2CValue *)local_210);
          lib::L2CValue::operator_(aLStack168,aLStack200);
          lib::L2CValue::_L2CValue(aLStack200);
        }
        lib::L2CValue::_L2CValue(aLStack184);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 9);
      lib::L2CValue::L2CValue((L2CValue *)local_210,0x77a08c3fc);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)local_210);
      iVar3 = lib::L2CValue::as_integer(aLStack152);
      uVar6 = app::sv_math::rand(HVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack184,uVar6);
      lib::L2CValue::_L2CValue((L2CValue *)local_210);
      lib::L2CValue::L2CValue((L2CValue *)local_210,1);
      lib::L2CValue::operator_(aLStack168,(L2CValue *)local_210);
      lib::L2CValue::_L2CValue((L2CValue *)local_210);
      iVar7 = lib::L2CValue::as_integer(aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      iVar3 = 0;
      do {
        if (iVar7 < iVar3) goto LAB_7100005e8c;
        iVar3 = iVar3 + 1;
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack136,iVar3);
        uVar9 = lib::L2CValue::operator_(aLStack184,pLVar13);
      } while ((uVar9 & 1) == 0);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,iVar3);
      lib::L2CValue::operator_(aLStack264,pLVar13);
LAB_7100005e8c:
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack136);
      pppuVar12 = appuStack120;
      goto LAB_7100005eb0;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_210,5);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    pppuVar12 = local_210;
LAB_7100005eb0:
    lib::L2CValue::_L2CValue((L2CValue *)pppuVar12);
  }
  if (((DAT_7100159aa0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159aa0), iVar3 != 0)) {
    pLVar19 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar19,9);
    lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a48,pLVar19);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0xb9afea4ec);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,0xb03f7f556);
    lib::L2CValue::L2CValue(aLStack136,0xb74f0c5c0);
    lib::L2CValue::L2CValue(aLStack152,0xbea945063);
    lib::L2CValue::L2CValue(aLStack168,0xb9d9360f5);
    lib::L2CValue::L2CValue(aLStack184,0xb049a314f);
    lib::L2CValue::L2CValue(aLStack200,0xb739d01d9);
    lib::L2CValue::L2CValue(aLStack216,0xbe3221c48);
    lib::L2CValue::L2CValue(aLStack232,0xb94252cde);
    FUN_7100008560(&DAT_7100159a48,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                   aLStack184,aLStack200,aLStack216,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a48,&PTR_LOOP_7100157000);
    __cxa_guard_release(&DAT_7100159aa0);
  }
  if (((DAT_7100159aa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159aa8), iVar3 != 0)) {
    pLVar19 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar19,9);
    lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a58,pLVar19);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0xf6d6ca1db);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,0xff465f061);
    lib::L2CValue::L2CValue(aLStack136,0xf8362c0f7);
    lib::L2CValue::L2CValue(aLStack152,0xf1d065554);
    lib::L2CValue::L2CValue(aLStack168,0xf6a0165c2);
    lib::L2CValue::L2CValue(aLStack184,0xff3083478);
    lib::L2CValue::L2CValue(aLStack200,0xf840f04ee);
    lib::L2CValue::L2CValue(aLStack216,0xf14b0197f);
    lib::L2CValue::L2CValue(aLStack232,0xf63b729e9);
    FUN_7100008560(&DAT_7100159a58,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                   aLStack184,aLStack200,aLStack216,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a58,&PTR_LOOP_7100157000);
    __cxa_guard_release(&DAT_7100159aa8);
  }
  if (((DAT_7100159ab0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159ab0), iVar3 != 0)) {
    pLVar19 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar19,9);
    lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a68,pLVar19);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0xb9afea4ec);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,0xb03f7f556);
    lib::L2CValue::L2CValue(aLStack136,0xb74f0c5c0);
    lib::L2CValue::L2CValue(aLStack152,0xbea945063);
    lib::L2CValue::L2CValue(aLStack168,0xb9d9360f5);
    lib::L2CValue::L2CValue(aLStack184,0xb049a314f);
    lib::L2CValue::L2CValue(aLStack200,0xb739d01d9);
    lib::L2CValue::L2CValue(aLStack216,0xbe3221c48);
    lib::L2CValue::L2CValue(aLStack232,0xb94252cde);
    FUN_7100008560(&DAT_7100159a68,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                   aLStack184,aLStack200,aLStack216,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a68,&PTR_LOOP_7100157000);
    __cxa_guard_release(&DAT_7100159ab0);
  }
  if (((DAT_7100159ab8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159ab8), iVar3 != 0)) {
    pLVar19 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar19,9);
    lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a78,pLVar19);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0xf6d6ca1db);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,0xff465f061);
    lib::L2CValue::L2CValue(aLStack136,0xf8362c0f7);
    lib::L2CValue::L2CValue(aLStack152,0xf1d065554);
    lib::L2CValue::L2CValue(aLStack168,0xf6a0165c2);
    lib::L2CValue::L2CValue(aLStack184,0xff3083478);
    lib::L2CValue::L2CValue(aLStack200,0xf840f04ee);
    lib::L2CValue::L2CValue(aLStack216,0xf14b0197f);
    lib::L2CValue::L2CValue(aLStack232,0xf63b729e9);
    FUN_7100008560(&DAT_7100159a78,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                   aLStack184,aLStack200,aLStack216,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a78,&PTR_LOOP_7100157000);
    __cxa_guard_release(&DAT_7100159ab8);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack264);
  iVar7 = lib::L2CValue::as_integer((L2CValue *)local_210);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar23,iVar3,iVar7);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_INSTANCE_WORK_ID_INT_TRICK_SUB);
  iVar3 = lib::L2CValue::as_integer(aLStack264);
  iVar7 = lib::L2CValue::as_integer((L2CValue *)local_210);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar23,iVar3,iVar7);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  fVar24 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar23);
  lib::L2CValue::L2CValue((L2CValue *)appuStack120,fVar24);
  lib::L2CValue::L2CValue((L2CValue *)local_210,-1.0);
  uVar9 = lib::L2CValue::operator__((L2CValue *)appuStack120,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_210,1);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    pLVar13 = (L2CValue *)
              lib::L2CValue::operator__((L2CValue *)&DAT_7100159a48,(L2CValue *)appuStack120);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    lVar14 = lib::L2CValue::as_integer(pLVar13);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar23,lVar14,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::L2CValue((L2CValue *)local_210,1);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    pLVar13 = (L2CValue *)
              lib::L2CValue::operator__((L2CValue *)&DAT_7100159a58,(L2CValue *)appuStack120);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    lVar14 = lib::L2CValue::as_integer(pLVar13);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar23,lVar14,iVar3);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_210,1);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    pLVar13 = (L2CValue *)
              lib::L2CValue::operator__((L2CValue *)&DAT_7100159a68,(L2CValue *)appuStack120);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    lVar14 = lib::L2CValue::as_integer(pLVar13);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar23,lVar14,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::L2CValue((L2CValue *)local_210,1);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    pLVar13 = (L2CValue *)
              lib::L2CValue::operator__((L2CValue *)&DAT_7100159a78,(L2CValue *)appuStack120);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    lVar14 = lib::L2CValue::as_integer(pLVar13);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar23,lVar14,iVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
  lib::L2CValue::L2CValue((L2CValue *)local_210,1);
  lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  pLVar13 = (L2CValue *)
            lib::L2CValue::operator__((L2CValue *)&DAT_7100159a48,(L2CValue *)appuStack120);
  lib::L2CValue::L2CValue((L2CValue *)local_210,0xb739d01d9);
  uVar9 = lib::L2CValue::operator__(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_210,1);
    lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&DAT_7100159a68,aLStack136);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0xd1f03434a);
    uVar9 = lib::L2CValue::operator__(pLVar13,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    if ((uVar9 & 1) != 0) goto LAB_7100006278;
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HIT_TABEMONO
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar3);
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
LAB_7100006278:
    lib::L2CValue::L2CValue
              ((L2CValue *)local_210,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HIT_TABEMONO
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar23,iVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  if (((DAT_7100159ac0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7100159ac0), iVar3 != 0)) {
    pLVar19 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar19,9);
    lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a88,pLVar19);
    lib::L2CValue::L2CValue((L2CValue *)local_210,0x4d5cb9290);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,0x44cc2c32a);
    lib::L2CValue::L2CValue(aLStack136,0x43bc5f3bc);
    lib::L2CValue::L2CValue(aLStack152,0x4a5a1661f);
    lib::L2CValue::L2CValue(aLStack168,0x4d2a65689);
    lib::L2CValue::L2CValue(aLStack184,0x44baf0733);
    lib::L2CValue::L2CValue(aLStack200,0x43ca837a5);
    lib::L2CValue::L2CValue(aLStack216,0x4ac172a34);
    lib::L2CValue::L2CValue(aLStack232,0x4db101aa2);
    FUN_7100008560(&DAT_7100159a88,local_210,appuStack120,aLStack136,aLStack152,aLStack168,
                   aLStack184,aLStack200,aLStack216,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a88,&PTR_LOOP_7100157000);
    __cxa_guard_release(&DAT_7100159ac0);
  }
  lib::L2CValue::L2CValue((L2CValue *)appuStack120,0x5a2add30f);
  lib::L2CValue::L2CValue((L2CValue *)local_210,1);
  lib::L2CValue::operator_(aLStack264,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&DAT_7100159a88,aLStack136);
  lVar14 = lib::L2CValue::as_integer((L2CValue *)appuStack120);
  lVar15 = lib::L2CValue::as_integer(pLVar13);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(*ppBVar23,lVar14,lVar15);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
  app::FighterSpecializer_GameWatch::init_panel(pBVar16);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_210,_SITUATION_KIND_GROUND);
  uVar9 = lib::L2CValue::operator__(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_KINETIC_TYPE_GAMEWATCH_SPECIAL_AIR_S);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar23,iVar3);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar23,iVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar23);
  lib::L2CValue::L2CValue((L2CValue *)appuStack120,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_210,SITUATION_KIND_AIR);
  uVar9 = lib::L2CValue::operator__((L2CValue *)appuStack120,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack152,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack152);
    uVar25 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar23,iVar3);
    lib::L2CValue::L2CValue(aLStack424,(float)uVar25);
    lib::L2CValue::L2CValue(aLStack408,(float)((ulong)uVar25 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)local_210,aLStack424);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,aLStack408);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0x88);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack424);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
    uVar25 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack456,(float)uVar25);
    lib::L2CValue::L2CValue(aLStack440,(float)((ulong)uVar25 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)local_210,aLStack456);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,aLStack440);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0x88);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::_L2CValue(aLStack456);
    lib::L2CValue::_L2CValue(aLStack168);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack168,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack184,0x157d08ac58);
    uVar9 = lib::L2CValue::as_integer(aLStack168);
    uVar17 = lib::L2CValue::as_integer(aLStack184);
    fVar24 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar23,uVar9,uVar17);
    lib::L2CValue::L2CValue((L2CValue *)appuStack120,fVar24);
    lib::L2CValue::operator_(pLVar13,(L2CValue *)appuStack120);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar18,pLVar13);
    lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_210);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar13);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar18);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)local_210);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  pLVar19 = (L2CTable *)operator_new(0x48);
  lib::L2CTable::L2CTable(pLVar19,0);
  lib::L2CValue::L2CValue((L2CValue *)appuStack120,pLVar19);
  lib::L2CValue::L2CValue(aLStack472,1);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,1);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,2);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,2);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,3);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,3);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,4);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,4);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,5);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,5);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,6);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,6);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,7);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,7);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,8);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,8);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  lib::L2CValue::L2CValue(aLStack472,9);
  FUN_71000082d0(local_210,aLStack472);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,9);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  local_1f0 = local_210;
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::_L2CValue(aLStack472);
  local_210[0] = &PTR_LAB_71001570a0;
  puVar20 = (undefined8 *)operator_new(0x40);
  puVar21 = puVar20 + 2;
  *puVar21 = &PTR_LAB_71001570a0;
  *puVar20 = puVar21;
  *(undefined4 *)(puVar20 + 1) = 0;
  puVar20[6] = puVar21;
  lib::L2CValue::L2CValue(aLStack136,(L2CInnerFunctionBase *)puVar20);
  lib::L2CAgent::sort((L2CAgent *)this,(L2CValue *)appuStack120,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  if (local_210 == local_1f0) {
    pcVar22 = (code *)(*local_1f0)[4];
  }
  else {
    if (local_1f0 == (undefined ***)0x0) goto LAB_71000069b0;
    pcVar22 = (code *)(*local_1f0)[5];
  }
  (*pcVar22)();
LAB_71000069b0:
  this_00 = &this[1].functions;
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
  lib::L2CValue::L2CValue((L2CValue *)local_210,1);
  lib::L2CValue::operator_(pLVar13,(L2CValue *)local_210);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,1);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,1);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,2);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,2);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,3);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,3);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,4);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,4);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,5);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,5);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,6);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,6);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,7);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,7);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,8);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,8);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appuStack120,9);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,0x43bc4bcd9);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar18 = (L2CValue *)lib::L2CValue::operator__(pLVar18,9);
  lib::L2CValue::operator_(pLVar18,pLVar13);
  lib::L2CValue::L2CValue((L2CValue *)local_210,0x5a2add30f);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(pLVar13,1);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&DAT_7100159a88,pLVar13);
  lVar14 = lib::L2CValue::as_integer((L2CValue *)local_210);
  lVar15 = lib::L2CValue::as_integer(pLVar13);
  app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar23,lVar14,lVar15);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::L2CValue((L2CValue *)local_210,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_FIX_PANEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_210);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar23,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_210);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)appuStack120);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  return;
}

