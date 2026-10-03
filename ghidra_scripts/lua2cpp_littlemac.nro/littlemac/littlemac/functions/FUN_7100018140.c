
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018140(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  float fVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_LW_HIT);
    uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) goto LAB_7100018648;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar8 = lib::L2CValue::operator<=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      uVar8 = app::lua_bind::AttackModule__part_size_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack160,uVar8);
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::operator-(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if (-1 < iVar3) {
        iVar5 = -1;
        do {
          iVar7 = iVar5 + 1;
          lib::L2CValue::L2CValue(aLStack160,iVar7);
          iVar6 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::AttackModule__is_attack_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,false);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::~L2CValue(aLStack144);
            pLVar9 = aLStack160;
LAB_7100018530:
            lib::L2CValue::~L2CValue(pLVar9);
          }
          else {
            lib::L2CValue::L2CValue(aLStack192,iVar7);
            lib::L2CValue::L2CValue(aLStack208,false);
            iVar6 = lib::L2CValue::as_integer(aLStack192);
            bVar1 = lib::L2CValue::as_bool(aLStack208);
            fVar10 = (float)app::lua_bind::AttackModule__get_power_impl
                                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,
                                       (bool)(bVar1 & 1),1.0,false);
            lib::L2CValue::L2CValue(aLStack176,fVar10);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            uVar8 = lib::L2CValue::operator<(aLStack96,aLStack176);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,iVar7);
              lib::L2CValue::L2CValue(aLStack144,false);
              iVar7 = lib::L2CValue::as_integer(aLStack96);
              fVar10 = (float)lib::L2CValue::as_number(aLStack128);
              bVar1 = lib::L2CValue::as_bool(aLStack144);
              app::lua_bind::AttackModule__set_power_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar7,fVar10,
                         (bool)(bVar1 & 1));
              lib::L2CValue::~L2CValue(aLStack144);
              pLVar9 = aLStack96;
              goto LAB_7100018530;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
    }
    pLVar9 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack128);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator!(aLStack128);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_7100018648;
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NONE);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LITTLEMAC_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      SVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::ShieldModule__set_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,SVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_7100018648;
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LITTLEMAC_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      SVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::ShieldModule__set_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,SVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    pLVar9 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar9);
LAB_7100018648:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

