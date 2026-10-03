
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100037e10(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_FLAG_ATK_CHARGE_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_WORK_INT_ATK_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack224,0x1ad837cfb8);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack112,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_WORK_INT_ATK_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack160,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::operator/(aLStack160,aLStack112);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_WORK_FLOAT_CHARGE_RATE);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_FLAG_ATK_CHARGE_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1eb2a9a685);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,true,false,false,
                           false,0);
        lib::L2CValue::L2CValue(aLStack240,iVar3);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_FLAG_SPD_CHARGE_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack176);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_WORK_INT_SPD_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_WORK_INT_SPD_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack144,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack224,0x193d4dbb46);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack128,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      uVar4 = lib::L2CValue::operator<=(aLStack128,aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_SHIPPU_SLASH_FLAG_SPD_CHARGE_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

