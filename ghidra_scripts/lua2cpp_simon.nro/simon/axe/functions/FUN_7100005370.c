
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005370(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundTouchID GVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  GroundCollisionLine *pGVar9;
  L2CValue *pLVar10;
  float fVar11;
  undefined8 uVar12;
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
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_INT_GROUND_TOUCH_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack168,iVar3);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_SIMON_AXE_GROUND_TOUCH_MAX);
  uVar7 = lib::L2CValue::operator==(aLStack168,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar7 & 1) == 0) {
    GVar4 = lib::L2CValue::as_integer(param_3);
    pvVar8 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar4);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack184,pvVar8);
    }
    uVar7 = lib::L2CValue::operator==(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar7 & 1) == 0) {
      pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack184);
      bVar1 = app::sv_ground_collision_line::is_floor(pGVar9);
      lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
      lib::L2CValue::operator!(aLStack152);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack152);
      if ((bVar2 & 1U) == 0) {
        pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack184);
        uVar12 = app::sv_ground_collision_line::get_center_pos(pGVar9);
        lib::L2CValue::L2CValue(aLStack232,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack216,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::L2CValue(aLStack136,aLStack232);
        lib::L2CValue::L2CValue(aLStack152,aLStack216);
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x78,(L2CValue)0x68);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::~L2CValue(aLStack232);
        pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack184);
        uVar12 = app::sv_ground_collision_line::get_normal(pGVar9);
        lib::L2CValue::L2CValue(aLStack280,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack264,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::L2CValue(aLStack136,aLStack280);
        lib::L2CValue::L2CValue(aLStack152,aLStack264);
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x78,(L2CValue)0x68);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack264);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::L2CValue(aLStack136,0);
        uVar7 = lib::L2CValue::operator<(aLStack136,aLStack168);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack136,1);
          lib::L2CValue::operator-(aLStack168,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          iVar3 = lib::L2CValue::as_integer(aLStack152);
          lib::L2CValue::~L2CValue(aLStack152);
          if (-1 < iVar3) {
            iVar6 = 0;
            do {
              pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x18cdc1683);
              lib::L2CValue::L2CValue
                        (aLStack152,
                         iVar6 + _WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_POS_X);
              iVar5 = lib::L2CValue::as_integer(aLStack152);
              fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                         iVar5);
              lib::L2CValue::L2CValue(aLStack136,fVar11);
              uVar7 = lib::L2CValue::operator==(pLVar10,aLStack136);
              if ((uVar7 & 1) == 0) {
LAB_71000057b0:
                lib::L2CValue::~L2CValue(aLStack136);
                lib::L2CValue::~L2CValue(aLStack152);
              }
              else {
                pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x1fbdb2615);
                lib::L2CValue::L2CValue
                          (aLStack312,
                           iVar6 + _WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_POS_Y);
                iVar5 = lib::L2CValue::as_integer(aLStack312);
                fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                           iVar5);
                lib::L2CValue::L2CValue(aLStack296,fVar11);
                uVar7 = lib::L2CValue::operator==(pLVar10,aLStack296);
                if ((uVar7 & 1) == 0) {
                  lib::L2CValue::~L2CValue(aLStack296);
                  lib::L2CValue::~L2CValue(aLStack312);
                  goto LAB_71000057b0;
                }
                pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x1fbdb2615);
                lib::L2CValue::L2CValue
                          (aLStack344,
                           iVar6 + _WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_X);
                iVar5 = lib::L2CValue::as_integer(aLStack344);
                fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                           iVar5);
                lib::L2CValue::L2CValue(aLStack328,fVar11);
                uVar7 = lib::L2CValue::operator==(pLVar10,aLStack328);
                if ((uVar7 & 1) == 0) {
                  uVar7 = 0;
                }
                else {
                  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x1fbdb2615);
                  lib::L2CValue::L2CValue
                            (aLStack376,
                             iVar6 + _WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_Y);
                  iVar5 = lib::L2CValue::as_integer(aLStack376);
                  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                             iVar5);
                  lib::L2CValue::L2CValue(aLStack360,fVar11);
                  uVar7 = lib::L2CValue::operator==(pLVar10,aLStack360);
                  uVar7 = uVar7 & 0xffffffff;
                  lib::L2CValue::~L2CValue(aLStack360);
                  lib::L2CValue::~L2CValue(aLStack376);
                }
                lib::L2CValue::~L2CValue(aLStack328);
                lib::L2CValue::~L2CValue(aLStack344);
                lib::L2CValue::~L2CValue(aLStack296);
                lib::L2CValue::~L2CValue(aLStack312);
                lib::L2CValue::~L2CValue(aLStack136);
                lib::L2CValue::~L2CValue(aLStack152);
                if ((uVar7 & 1) != 0) {
                  lib::L2CValue::L2CValue(param_1,false);
                  goto LAB_7100005ac4;
                }
              }
              bVar2 = iVar6 < iVar3;
              iVar6 = iVar6 + 1;
            } while (bVar2);
          }
        }
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::operator+(pLVar10,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::L2CValue
                  (aLStack136,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_POS_X);
        lib::L2CValue::operator+(aLStack136,aLStack168);
        lib::L2CValue::~L2CValue(aLStack136);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        iVar3 = lib::L2CValue::as_integer(aLStack296);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar3);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack152);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack200,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::operator+(pLVar10,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::L2CValue
                  (aLStack136,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_POS_Y);
        lib::L2CValue::operator+(aLStack136,aLStack168);
        lib::L2CValue::~L2CValue(aLStack136);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        iVar3 = lib::L2CValue::as_integer(aLStack296);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar3);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack152);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::operator+(pLVar10,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::L2CValue
                  (aLStack136,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_X);
        lib::L2CValue::operator+(aLStack136,aLStack168);
        lib::L2CValue::~L2CValue(aLStack136);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        iVar3 = lib::L2CValue::as_integer(aLStack296);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar3);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack152);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::operator+(pLVar10,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::L2CValue
                  (aLStack136,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_FLOAT_GROUND_TOUCH_NORMAL_Y);
        lib::L2CValue::operator+(aLStack136,aLStack168);
        lib::L2CValue::~L2CValue(aLStack136);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        iVar3 = lib::L2CValue::as_integer(aLStack296);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar3);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::L2CValue(aLStack136,1);
        lib::L2CValue::L2CValue(aLStack152,_WEAPON_SIMON_AXE_STATUS_HOP_WORK_INT_GROUND_TOUCH_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        iVar6 = lib::L2CValue::as_integer(aLStack152);
        app::lua_bind::WorkModule__add_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar6);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::L2CValue(param_1,true);
LAB_7100005ac4:
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue(aLStack200);
      }
      else {
        lib::L2CValue::L2CValue(param_1,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(param_1,false);
    }
    lib::L2CValue::~L2CValue(aLStack184);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack168);
  return;
}

