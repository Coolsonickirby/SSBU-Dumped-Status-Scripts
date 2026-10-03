
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001287b0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
        lib::L2CValue::L2CValue(aLStack144,fVar7);
        lib::L2CValue::operator-(aLStack144);
        lib::L2CValue::operator*(pLVar4,aLStack128);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xcf44ba9e5);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack160,fVar7);
        uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WAIT);
          lib::L2CValue::L2CValue(aLStack304,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::L2CValue(param_1,true);
        }
        else {
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK_BACK)
          ;
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue(param_1,true);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK);
        lib::L2CValue::L2CValue(aLStack240,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(param_1,true);
      }
LAB_71001291e8:
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
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_LANDING);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_71001291e8;
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
LAB_7100128cd8:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack384,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack400,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
          lib::L2CValue::~L2CValue(aLStack400);
          pLVar4 = aLStack384;
          goto LAB_7100129174;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack432,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0xb99cc3fbc);
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_JUMP_AERIAL_TYPE_FLY);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JUMP_AERIAL_TYPE_FLY_BUTTON);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack80,2);
        uVar5 = lib::L2CValue::operator<=(aLStack80,aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_7100129028;
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
        if ((bVar1 & 1U) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
          lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack176,0xcce8375ba);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (param_2->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar7);
          uVar5 = lib::L2CValue::operator<=(aLStack80,pLVar4);
          if ((uVar5 & 1) == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(param_2->moduleAccessor)
            ;
            lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
            lib::L2CValue::~L2CValue(aLStack192);
          }
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar2 & 1) == 0) goto LAB_7100129038;
        }
        else {
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack416,true);
          goto LAB_7100129044;
        }
      }
LAB_7100129038:
      lib::L2CValue::L2CValue(aLStack416,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,2);
      uVar5 = lib::L2CValue::operator<=(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
LAB_7100129028:
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        goto LAB_7100129038;
      }
      lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      if ((bVar1 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xcce8375ba);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack160,fVar7);
        uVar5 = lib::L2CValue::operator<=(aLStack160,pLVar4);
        if ((uVar5 & 1) == 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(param_2->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack208);
          lib::L2CValue::~L2CValue(aLStack208);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar2 & 1) == 0) goto LAB_7100129038;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      iVar3 = lib::L2CValue::as_integer(aLStack432);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100129038;
      lib::L2CValue::L2CValue(aLStack416,true);
    }
LAB_7100129044:
    lib::L2CValue::~L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack416);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
    }
    else {
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
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack448,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack464,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
          lib::L2CValue::~L2CValue(aLStack464);
          pLVar4 = aLStack448;
          goto LAB_7100129174;
        }
      }
    }
    bVar1 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100128cd8;
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100128cd8;
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_AERIAL);
    lib::L2CValue::L2CValue(aLStack368,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack368);
    pLVar4 = aLStack352;
LAB_7100129174:
    lib::L2CValue::~L2CValue(pLVar4);
    bVar1 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}

