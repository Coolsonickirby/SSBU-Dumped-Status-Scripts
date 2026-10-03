
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100147af0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *this;
  Fighter *pFVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack128,HVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x2034fd9b5c);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    FUN_71001481f0(aLStack96,param_2);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if (((bVar2 & 1U) == 0) &&
       (bVar2 = lib::L2CValue::operator.cast.to.bool(param_3), (bVar2 & 1U) == 0)) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_RESERVED_SHOOT_TURN);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100147e90;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,false);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack144,0x1a793b0b2f);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,1.0);
    lib::L2CValue::L2CValue(aLStack192,false);
    lib::L2CValue::L2CValue(aLStack208,false);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    fVar9 = (float)lib::L2CValue::as_number(aLStack176);
    bVar1 = lib::L2CValue::as_bool(aLStack192);
    bVar3 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,HVar5,fVar8,fVar9,
               (bool)(bVar1 & 1),(bool)(bVar3 & 1),0.0,true,true,false);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(this);
    app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar7,false);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_RESERVED_SHOOT_TURN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::MotionModule__remove_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,false);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_7100147e9c;
    }
  }
LAB_7100147e90:
  lib::L2CValue::L2CValue(param_1,0);
LAB_7100147e9c:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

