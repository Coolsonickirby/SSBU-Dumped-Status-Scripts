
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044720(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar2 = app::lua_bind::StatusModule__status_kind_que_from_script_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100044a54;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100044a54;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100044a54;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_S3);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100044a54;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_LADDER_ATTACK);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100044a54;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100044ac8;
    iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack112,false);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x20);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
    lib::L2CValue::operator&(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      lib::L2CValue::operator=(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
      iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
LAB_7100044a44:
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      goto LAB_7100044a54;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_ATTACK_AIR_KIND_HI);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_COMMAND_ATTACK_AIR_KIND_N);
        uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) goto LAB_7100044a44;
      }
    }
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar5 = aLStack96;
  }
  else {
LAB_7100044a54:
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,param_2);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar5 = aLStack144;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100044ac8:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

