
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100034b50(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100034e68;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_BRAKE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_FALL_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_FALL_COUNT)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      goto LAB_7100034c9c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_BRAKE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
LAB_7100034c9c:
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_ATTACK_RESTART_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_ATTACK_RESTART_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_ATTACK_RESTART_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_GAME);
      lib::L2CValue::L2CValue(aLStack80,0x1499a3e2df);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar5,-1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_SE_INTERVAL);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,0);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_INT_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100034e68:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

