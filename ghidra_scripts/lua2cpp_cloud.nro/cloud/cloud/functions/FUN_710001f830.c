
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f830(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
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
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_INPUT_SUCCESS);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar2 = false;
LAB_710001f8e4:
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator==(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      bVar3 = true;
      goto LAB_710001f940;
    }
    bVar1 = 0;
LAB_710001f99c:
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if (bVar2) {
LAB_710001f9b0:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_HIT_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    bVar2 = true;
    if ((bVar3 & 1U) == 0) goto LAB_710001f8e4;
    bVar3 = false;
LAB_710001f940:
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_MOTION_CHANGE_ENABLE);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    if (bVar3) goto LAB_710001f99c;
    if (bVar2) goto LAB_710001f9b0;
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_710001fb54:
      bVar2 = false;
      goto LAB_710001fb5c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710001fb54;
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      pLVar5 = aLStack288;
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      pLVar5 = aLStack256;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_CHANGE_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack224,iVar4);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar5 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  bVar2 = true;
LAB_710001fb5c:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

