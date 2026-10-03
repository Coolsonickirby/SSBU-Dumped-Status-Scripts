
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039f60(long param_1)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),10);
  lib::L2CValue::L2CValue(aLStack96,pLVar5);
  pLVar5 = aLStack96;
  FUN_710002e830(aLStack80,param_1);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_PLATE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_STONE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_NEXT_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x50000000);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(int)pLVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::FighterSpecializer_Pickel::get_material_num(pBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      lib::L2CValue::L2CValue(aLStack80,0xf250902eb);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      pLVar5 = (L2CValue *)lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(Hash40)pLVar5,0.0,1.0,false
                 ,false,0.0,true,true,false);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_group_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_group_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0x14e8845f6d);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8);
  lib::L2CValue::L2CValue(aLStack80,uVar4);
  lib::L2CValue::L2CValue(aLStack144,0x1cd735994b);
  HVar8 = lib::L2CValue::as_hash(aLStack144);
  uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CAgent::math_max((L2CAgent *)aLStack80,aLStack128,pLVar5);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ControlModule__set_command_life_extend_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

