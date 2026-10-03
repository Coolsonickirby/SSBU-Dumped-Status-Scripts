
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ffb0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,lVar4);
  lib::L2CValue::operator=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack112);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar6,fVar7,(bool)(bVar1 & 1),
               0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

