
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000107c0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  FighterModuleAccessor *pFVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  float fVar12;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SMASH_ATTACK_FLAG_SHOOT_PIKMIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_SMASH_ATTACK_FLAG_SHOOT_PIKMIN);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar11 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar7 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) goto LAB_71000112e4;
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0 + 1);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,pvVar8);
  }
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_DEATH);
  uVar7 = lib::L2CValue::operator==(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_DEATH_WAIT);
    bVar1 = lib::L2CValue::operator==(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    bVar1 = 1;
  }
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar7 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,pvVar8);
    }
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack208);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
    lib::L2CValue::L2CValue(aLStack224,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_DEATH);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_DEATH_WAIT);
      bVar1 = lib::L2CValue::operator==(aLStack224,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_S4);
  uVar7 = lib::L2CValue::operator==(aLStack208,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  if ((uVar7 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__status_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack208,iVar3);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI4);
    uVar7 = lib::L2CValue::operator==(aLStack208,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar7 & 1) == 0) {
      iVar3 = app::lua_bind::StatusModule__status_kind_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack208,iVar3);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_LW4);
      uVar7 = lib::L2CValue::operator==(aLStack208,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack208);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
          iVar3 = lib::L2CValue::as_integer(aLStack208);
          uVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::LinkModule__link_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,uVar4);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
            lib::L2CValue::operator=(pLVar5,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_ATTACK_LW4;
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xc21b85cd4);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            lib::L2CValue::operator=(pLVar5,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xaa79e68a2);
            lib::L2CValue::operator=(pLVar10,pLVar5);
            FUN_7100008280(aLStack304,param_1,aLStack208,aLStack224);
            lib::L2CValue::~L2CValue(aLStack304);
            iVar3 = lib::L2CValue::as_integer(aLStack208);
            app::lua_bind::LinkModule__unlink_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
            lib::L2CValue::~L2CValue(aLStack224);
          }
          lib::L2CValue::~L2CValue(aLStack208);
        }
        lib::L2CValue::L2CValue(aLStack80,1);
        uVar7 = lib::L2CValue::operator<(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar7 = lib::L2CValue::operator==(aLStack128,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
            iVar3 = lib::L2CValue::as_integer(aLStack208);
            uVar4 = lib::L2CValue::as_integer(aLStack160);
            bVar1 = app::lua_bind::LinkModule__link_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,uVar4);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((bVar2 & 1U) != 0) {
              app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x105a79305b);
              lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
              lib::L2CValue::operator=(pLVar5,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_ATTACK_LW4;
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xc21b85cd4);
              lib::L2CValue::L2CValue(aLStack80,iVar3);
              lib::L2CValue::operator=(pLVar5,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
              pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xaa79e68a2);
              lib::L2CValue::operator=(pLVar10,pLVar5);
              FUN_7100008280(aLStack320,param_1,aLStack208,aLStack224);
              lib::L2CValue::~L2CValue(aLStack320);
              iVar3 = lib::L2CValue::as_integer(aLStack208);
              app::lua_bind::LinkModule__unlink_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
              goto LAB_7100010f44;
            }
            goto LAB_7100010f4c;
          }
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::LinkModule__link_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x105a79305b);
          lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
          lib::L2CValue::operator=(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_ATTACK_HI4;
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xc21b85cd4);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::operator=(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xaa79e68a2);
          lib::L2CValue::operator=(pLVar10,pLVar5);
          FUN_7100008280(aLStack288,param_1,aLStack208,aLStack224);
          lib::L2CValue::~L2CValue(aLStack288);
          iVar3 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::LinkModule__unlink_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          goto LAB_7100010f44;
        }
        goto LAB_7100010f4c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::LinkModule__link_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        app::FighterPikminLinkEventWeaponPikminSyncLR::new_l2c_table();
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack80,0x2f9f0da252);
        lib::L2CValue::operator=(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,fVar12);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x35851bc47);
        lib::L2CValue::operator=(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0xaa79e68a2);
        lib::L2CValue::operator=(pLVar10,pLVar5);
        FUN_7100008280(aLStack240,param_1,aLStack208,aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
        lib::L2CValue::operator=(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_ATTACK_S4;
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0xc21b85cd4);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator=(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0xaa79e68a2);
        lib::L2CValue::operator=(pLVar10,pLVar5);
        FUN_7100008280(aLStack272,param_1,aLStack208,aLStack256);
        lib::L2CValue::~L2CValue(aLStack272);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::LinkModule__unlink_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack256);
LAB_7100010f44:
        lib::L2CValue::~L2CValue(aLStack224);
      }
LAB_7100010f4c:
      lib::L2CValue::~L2CValue(aLStack208);
    }
  }
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
  app::FighterSpecializer_Pikmin::reduce_pikmin_all(pFVar6);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71000112e4:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

