
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010f20(long param_1)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x31d39a761);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::ModelModule__clear_joint_srt_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x35dbfe258);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::ModelModule__clear_joint_srt_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    lib::L2CValue::L2CValue(aLStack64,true);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::FighterSpecializer_Lucario::set_mach_validity(pBVar7,(bool)(bVar1 & 1));
    pLVar5 = aLStack64;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_HI_RUSH_END);
    uVar4 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack80,0xd07d69a9b);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack80,0xa4e6eeca8);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    lib::L2CValue::L2CValue(aLStack160,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,aLStack160);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar5 = aLStack112;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  return;
}

