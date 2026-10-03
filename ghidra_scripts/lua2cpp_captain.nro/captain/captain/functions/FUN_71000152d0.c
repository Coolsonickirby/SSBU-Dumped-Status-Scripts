
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000152d0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_71000154dc;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) goto LAB_71000154dc;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_CHECK_END);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::operator!(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
LAB_71000154b0:
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_CHECK_END);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    pLVar4 = aLStack64;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator*(pLVar4,aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack128,0xcee0a3848);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    uVar5 = lib::L2CValue::operator<=(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_71000154b0;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_N_TURN);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar4 = aLStack144;
  }
  lib::L2CValue::~L2CValue(pLVar4);
LAB_71000154dc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

