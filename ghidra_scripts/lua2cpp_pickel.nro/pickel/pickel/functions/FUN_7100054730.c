
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100054730(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  L2CValue aLStack80 [16];
  
  this = &param_2->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack112,0x194012111a);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar7 = (float)app::lua_bind::PostureModule__scale_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x1db2f8b44c);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
    fVar7 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack80);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_check_command_walk(param_2);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
        fVar7 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack176,fVar7);
        lib::L2CValue::operator-(aLStack176);
        lib::L2CValue::operator*(pLVar4,aLStack128);
        lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack224,0xcf44ba9e5);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack192,fVar7);
        uVar5 = lib::L2CValue::operator<=(aLStack192,aLStack112);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WAIT);
          lib::L2CValue::L2CValue(aLStack288,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::L2CValue(param_1,true);
        }
        else {
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WALK_BACK);
          lib::L2CValue::L2CValue(aLStack256,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::L2CValue(param_1,true);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WALK);
        lib::L2CValue::L2CValue(aLStack160,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(param_1,true);
      }
LAB_7100054eb0:
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_LANDING);
      lib::L2CValue::L2CValue(aLStack320,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_7100054eb0;
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100054cd4;
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100054cd4;
    bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_7100054cd4;
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_JUMP_AERIAL);
    lib::L2CValue::L2CValue(aLStack352,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack352);
    pLVar4 = aLStack336;
LAB_7100054e48:
    lib::L2CValue::~L2CValue(pLVar4);
    bVar1 = true;
  }
  else {
LAB_7100054cd4:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack368,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack384,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
          lib::L2CValue::~L2CValue(aLStack384);
          pLVar4 = aLStack368;
          goto LAB_7100054e48;
        }
      }
    }
    bVar1 = false;
  }
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}

