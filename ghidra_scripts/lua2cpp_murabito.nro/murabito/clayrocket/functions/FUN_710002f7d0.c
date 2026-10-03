
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f7d0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  Hash40 HVar12;
  float fVar13;
  L2CValue aLStack920 [16];
  L2CValue aLStack904 [16];
  L2CValue aLStack888 [16];
  L2CValue aLStack872 [16];
  L2CValue aLStack856 [16];
  L2CValue aLStack840 [16];
  L2CValue aLStack824 [16];
  L2CValue aLStack808 [16];
  L2CValue aLStack792 [16];
  L2CValue aLStack776 [16];
  L2CValue aLStack760 [16];
  L2CValue aLStack744 [16];
  L2CValue aLStack728 [16];
  L2CValue aLStack712 [16];
  L2CValue aLStack696 [16];
  L2CValue aLStack680 [16];
  L2CValue aLStack664 [16];
  L2CValue aLStack648 [16];
  L2CValue aLStack632 [16];
  L2CValue aLStack616 [16];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
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
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue
            (aLStack120,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_LODGED_THETA);
  iVar11 = lib::L2CValue::as_integer(aLStack120);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar11);
  lib::L2CValue::L2CValue(aLStack136,fVar13);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_GROUND_TOUCH_FLAG_LEFT);
  lib::L2CValue::operator&(param_3,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack152);
  if ((bVar2 & 1U) == 0) {
    bVar2 = false;
LAB_710002f908:
    lib::L2CValue::L2CValue(aLStack120,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator&(param_3,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack248);
    if ((bVar3 & 1U) == 0) {
      bVar3 = false;
LAB_710002f9a0:
      lib::L2CValue::L2CValue(aLStack120,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator&(param_3,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack344);
      if ((bVar4 & 1U) == 0) {
        bVar4 = false;
LAB_710002fa38:
        lib::L2CValue::L2CValue(aLStack120,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator&(param_3,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        bVar5 = lib::L2CValue::operator.cast.to.bool(aLStack440);
        if ((bVar5 & 1U) == 0) {
          bVar5 = false;
LAB_710002fad0:
          lib::L2CValue::L2CValue(aLStack120,GROUND_TOUCH_FLAG_UP_LEFT);
          lib::L2CValue::operator&(param_3,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          bVar6 = lib::L2CValue::operator.cast.to.bool(aLStack536);
          if ((bVar6 & 1U) == 0) {
            bVar6 = false;
LAB_710002fb6c:
            lib::L2CValue::L2CValue(aLStack120,GROUND_TOUCH_FLAG_UP_RIGHT);
            lib::L2CValue::operator&(param_3,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            bVar7 = lib::L2CValue::operator.cast.to.bool(aLStack632);
            if ((bVar7 & 1U) == 0) {
              bVar7 = false;
LAB_710002fc08:
              lib::L2CValue::L2CValue(aLStack120,_GROUND_TOUCH_FLAG_DOWN_LEFT);
              lib::L2CValue::operator&(param_3,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              bVar8 = lib::L2CValue::operator.cast.to.bool(aLStack728);
              if ((bVar8 & 1U) == 0) {
                bVar8 = false;
LAB_710002fca4:
                lib::L2CValue::L2CValue(aLStack120,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                lib::L2CValue::operator&(param_3,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                bVar9 = lib::L2CValue::operator.cast.to.bool(aLStack824);
                if ((bVar9 & 1U) == 0) {
                  lib::L2CValue::~L2CValue(aLStack824);
                  bVar10 = 0;
                  if (!bVar8) goto LAB_710002fd60;
                  goto LAB_710002fdc8;
                }
                lib::L2CValue::L2CValue(aLStack840,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
                lib::L2CValue::L2CValue(aLStack856,param_4);
                lib::L2CValue::L2CValue(aLStack872,param_5);
                lib::L2CValue::L2CValue(aLStack888,aLStack136);
                FUN_7100031110(aLStack120,param_2,aLStack840,aLStack856,aLStack872,aLStack888);
                bVar10 = lib::L2CValue::operator.cast.to.bool(aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::~L2CValue(aLStack888);
                lib::L2CValue::~L2CValue(aLStack872);
                lib::L2CValue::~L2CValue(aLStack856);
                lib::L2CValue::~L2CValue(aLStack840);
                lib::L2CValue::~L2CValue(aLStack824);
                if (bVar8) goto LAB_710002fdc8;
LAB_710002fd60:
                lib::L2CValue::~L2CValue(aLStack728);
              }
              else {
                lib::L2CValue::L2CValue(aLStack760,_GROUND_TOUCH_FLAG_DOWN_LEFT);
                lib::L2CValue::L2CValue(aLStack776,param_4);
                lib::L2CValue::L2CValue(aLStack792,param_5);
                lib::L2CValue::L2CValue(aLStack808,aLStack136);
                FUN_7100031110(aLStack744,param_2,aLStack760,aLStack776,aLStack792,aLStack808);
                bVar9 = lib::L2CValue::operator.cast.to.bool(aLStack744);
                bVar8 = true;
                bVar10 = 1;
                if ((bVar9 & 1U) == 0) goto LAB_710002fca4;
LAB_710002fdc8:
                lib::L2CValue::~L2CValue(aLStack744);
                lib::L2CValue::~L2CValue(aLStack808);
                lib::L2CValue::~L2CValue(aLStack792);
                lib::L2CValue::~L2CValue(aLStack776);
                lib::L2CValue::~L2CValue(aLStack760);
                lib::L2CValue::~L2CValue(aLStack728);
              }
              if (bVar7) goto LAB_710002fe00;
              lib::L2CValue::~L2CValue(aLStack632);
            }
            else {
              lib::L2CValue::L2CValue(aLStack664,GROUND_TOUCH_FLAG_UP_RIGHT);
              lib::L2CValue::L2CValue(aLStack680,param_4);
              lib::L2CValue::L2CValue(aLStack696,param_5);
              lib::L2CValue::L2CValue(aLStack712,aLStack136);
              FUN_7100031110(aLStack648,param_2,aLStack664,aLStack680,aLStack696,aLStack712);
              bVar8 = lib::L2CValue::operator.cast.to.bool(aLStack648);
              bVar7 = true;
              bVar10 = 1;
              if ((bVar8 & 1U) == 0) goto LAB_710002fc08;
LAB_710002fe00:
              lib::L2CValue::~L2CValue(aLStack648);
              lib::L2CValue::~L2CValue(aLStack712);
              lib::L2CValue::~L2CValue(aLStack696);
              lib::L2CValue::~L2CValue(aLStack680);
              lib::L2CValue::~L2CValue(aLStack664);
              lib::L2CValue::~L2CValue(aLStack632);
            }
            if (bVar6) goto LAB_710002fe38;
            lib::L2CValue::~L2CValue(aLStack536);
          }
          else {
            lib::L2CValue::L2CValue(aLStack568,GROUND_TOUCH_FLAG_UP_LEFT);
            lib::L2CValue::L2CValue(aLStack584,param_4);
            lib::L2CValue::L2CValue(aLStack600,param_5);
            lib::L2CValue::L2CValue(aLStack616,aLStack136);
            FUN_7100031110(aLStack552,param_2,aLStack568,aLStack584,aLStack600,aLStack616);
            bVar7 = lib::L2CValue::operator.cast.to.bool(aLStack552);
            bVar6 = true;
            bVar10 = 1;
            if ((bVar7 & 1U) == 0) goto LAB_710002fb6c;
LAB_710002fe38:
            lib::L2CValue::~L2CValue(aLStack552);
            lib::L2CValue::~L2CValue(aLStack616);
            lib::L2CValue::~L2CValue(aLStack600);
            lib::L2CValue::~L2CValue(aLStack584);
            lib::L2CValue::~L2CValue(aLStack568);
            lib::L2CValue::~L2CValue(aLStack536);
          }
          if (bVar5) goto LAB_710002fe70;
          lib::L2CValue::~L2CValue(aLStack440);
        }
        else {
          lib::L2CValue::L2CValue(aLStack472,_GROUND_TOUCH_FLAG_UP);
          lib::L2CValue::L2CValue(aLStack488,param_4);
          lib::L2CValue::L2CValue(aLStack504,param_5);
          lib::L2CValue::L2CValue(aLStack520,aLStack136);
          FUN_7100031110(aLStack456,param_2,aLStack472,aLStack488,aLStack504,aLStack520);
          bVar6 = lib::L2CValue::operator.cast.to.bool(aLStack456);
          bVar5 = true;
          bVar10 = 1;
          if ((bVar6 & 1U) == 0) goto LAB_710002fad0;
LAB_710002fe70:
          lib::L2CValue::~L2CValue(aLStack456);
          lib::L2CValue::~L2CValue(aLStack520);
          lib::L2CValue::~L2CValue(aLStack504);
          lib::L2CValue::~L2CValue(aLStack488);
          lib::L2CValue::~L2CValue(aLStack472);
          lib::L2CValue::~L2CValue(aLStack440);
        }
        if (bVar4) goto LAB_710002fea4;
        lib::L2CValue::~L2CValue(aLStack344);
      }
      else {
        lib::L2CValue::L2CValue(aLStack376,GROUND_TOUCH_FLAG_DOWN);
        lib::L2CValue::L2CValue(aLStack392,param_4);
        lib::L2CValue::L2CValue(aLStack408,param_5);
        lib::L2CValue::L2CValue(aLStack424,aLStack136);
        FUN_7100031110(aLStack360,param_2,aLStack376,aLStack392,aLStack408,aLStack424);
        bVar5 = lib::L2CValue::operator.cast.to.bool(aLStack360);
        bVar4 = true;
        bVar10 = 1;
        if ((bVar5 & 1U) == 0) goto LAB_710002fa38;
LAB_710002fea4:
        lib::L2CValue::~L2CValue(aLStack360);
        lib::L2CValue::~L2CValue(aLStack424);
        lib::L2CValue::~L2CValue(aLStack408);
        lib::L2CValue::~L2CValue(aLStack392);
        lib::L2CValue::~L2CValue(aLStack376);
        lib::L2CValue::~L2CValue(aLStack344);
      }
      if (bVar3) goto LAB_710002fed8;
      lib::L2CValue::~L2CValue(aLStack248);
    }
    else {
      lib::L2CValue::L2CValue(aLStack280,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::L2CValue(aLStack296,param_4);
      lib::L2CValue::L2CValue(aLStack312,param_5);
      lib::L2CValue::L2CValue(aLStack328,aLStack136);
      FUN_7100031110(aLStack264,param_2,aLStack280,aLStack296,aLStack312,aLStack328);
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack264);
      bVar3 = true;
      bVar10 = 1;
      if ((bVar4 & 1U) == 0) goto LAB_710002f9a0;
LAB_710002fed8:
      lib::L2CValue::~L2CValue(aLStack264);
      lib::L2CValue::~L2CValue(aLStack328);
      lib::L2CValue::~L2CValue(aLStack312);
      lib::L2CValue::~L2CValue(aLStack296);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack248);
    }
    if (bVar2) {
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack232);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::~L2CValue(aLStack200);
      lib::L2CValue::~L2CValue(aLStack184);
    }
    lib::L2CValue::~L2CValue(aLStack152);
    if ((bVar10 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_71000300c0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack184,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::L2CValue(aLStack200,param_4);
    lib::L2CValue::L2CValue(aLStack216,param_5);
    lib::L2CValue::L2CValue(aLStack232,aLStack136);
    FUN_7100031110(aLStack168,param_2,aLStack184,aLStack200,aLStack216,aLStack232);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack168);
    if ((bVar2 & 1U) == 0) {
      bVar2 = true;
      goto LAB_710002f908;
    }
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack232);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack152);
  }
  lib::L2CValue::L2CValue(aLStack120,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_LODGED);
  iVar11 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__on_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar11);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_LINK_NO_CONSTRAINT);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  bVar10 = app::lua_bind::LinkModule__is_link_impl
                     (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar11);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar10 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack120);
    lVar1 = -0x88;
LAB_7100030074:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack344,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE_REFLECTED);
    iVar11 = lib::L2CValue::as_integer(aLStack344);
    bVar10 = app::lua_bind::WorkModule__is_flag_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar11);
    lib::L2CValue::L2CValue(aLStack248,(bool)(bVar10 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue(aLStack344);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack152);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack152,0x2bd53d128c);
      iVar11 = lib::L2CValue::as_integer(aLStack120);
      HVar12 = lib::L2CValue::as_hash(aLStack152);
      app::lua_bind::LinkModule__send_event_parents_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar11,HVar12);
      lib::L2CValue::~L2CValue(aLStack152);
      lVar1 = -0x68;
      goto LAB_7100030074;
    }
  }
  lib::L2CValue::L2CValue(aLStack904,_WEAPON_MURABITO_CLAYROCKET_STATUS_KIND_BURST);
  lib::L2CValue::L2CValue(aLStack920,false);
  lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x78,(L2CValue)0x68);
  lib::L2CValue::~L2CValue(aLStack920);
  lib::L2CValue::~L2CValue(aLStack904);
  lib::L2CValue::L2CValue(param_1,true);
LAB_71000300c0:
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

