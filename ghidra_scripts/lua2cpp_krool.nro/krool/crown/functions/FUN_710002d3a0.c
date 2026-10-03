
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002d3a0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,
             _WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_U_TURN_SHIFT_MOTION_FRAME_RESERVE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    uVar4 = app::lua_bind::MotionModule__end_frame_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,uVar4);
    lib::L2CValue::L2CValue(aLStack64,0.5);
    lib::L2CValue::operator*(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    fVar5 = (float)app::lua_bind::MotionModule__rate_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator+(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5,true,false,false);
    lib::L2CValue::L2CValue
              (aLStack64,
               _WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_U_TURN_SHIFT_MOTION_FRAME_RESERVE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

