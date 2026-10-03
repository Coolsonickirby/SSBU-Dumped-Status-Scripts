
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027170(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CAgent *this;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar6 = (L2CValue *)(param_2 + 200);
  pLVar7 = (L2CValue *)0x1a;
  this = (L2CAgent *)lib::L2CValue::operator[](pLVar6,0x1a);
  lib::L2CAgent::math_abs(this,pLVar7);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0xcee0a3848);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    fVar8 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::L2CValue(aLStack80,31.0);
    uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar5 = lib::L2CValue::operator<(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar4 = lib::L2CValue::operator<(aLStack80,pLVar6);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_7100027500;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        }
      }
      else if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar4 = lib::L2CValue::operator<(aLStack80,pLVar6);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100027500;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar4 = lib::L2CValue::operator<(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar4 = lib::L2CValue::operator<(aLStack80,pLVar6);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100027500;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
LAB_7100027500:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_TRANSITION_TERM_ID_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

