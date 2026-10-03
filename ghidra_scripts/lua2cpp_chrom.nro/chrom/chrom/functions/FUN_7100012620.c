
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012620(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *this;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_7100012a80;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar7 = lib::L2CValue::operator<=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      uVar7 = app::lua_bind::AttackModule__part_size_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack144,uVar7);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator-(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if (-1 < iVar3) {
        iVar5 = -1;
        do {
          lib::L2CValue::L2CValue(aLStack128,iVar5 + 1);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::AttackModule__is_attack_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,false);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,iVar5 + 1);
            lib::L2CValue::L2CValue(aLStack128,false);
            iVar6 = lib::L2CValue::as_integer(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::AttackModule__set_power_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar6,fVar8,
                       (bool)(bVar1 & 1));
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
    }
    this = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::operator!(aLStack112);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_7100012a80;
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack112,_SHIELD_STATUS_NONE);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      SVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ShieldModule__set_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,SVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100012a80;
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack112,_SHIELD_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      SVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ShieldModule__set_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,SVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    this = aLStack80;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100012a80:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

