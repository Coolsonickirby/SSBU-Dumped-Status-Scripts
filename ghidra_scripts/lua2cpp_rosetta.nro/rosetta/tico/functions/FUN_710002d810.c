
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002d810(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_ENABLE_TRANSITION_SELF);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_710002dd98;
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_INT_COMMAND_FLAG_CAT1);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_SITUATION_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::operator=(aLStack112,pLVar6);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_NONE);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator&(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_AIR);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      goto LAB_710002dce4;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI3);
    lib::L2CValue::operator&(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW3);
      lib::L2CValue::operator&(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
        lib::L2CValue::operator&(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
          lib::L2CValue::operator&(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) goto LAB_710002dcec;
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK);
          lib::L2CValue::operator=(aLStack96,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_KIND_S);
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_WORK_INT_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_3);
          lib::L2CValue::operator=(aLStack96,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_KIND_LW);
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_WORK_INT_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_3);
        lib::L2CValue::operator=(aLStack96,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_KIND_HI);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_3_WORK_INT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_ATTACK_3);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
LAB_710002dce4:
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_710002dcec:
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TRANSITION_SELF);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack160,aLStack96);
    lib::L2CValue::L2CValue(aLStack176,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(param_1,1);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
LAB_710002dd98:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

