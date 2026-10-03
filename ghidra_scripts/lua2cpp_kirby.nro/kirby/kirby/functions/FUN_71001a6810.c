
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71001a6810(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_71001a6924:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    this_00 = &this->globalTable;
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_71001a6f3c;
        lib::L2CValue::L2CValue(aLStack96,0xa82125b6f);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack96,fVar7);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack128,ENERGY_STOP_RESET_TYPE_GROUND);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack112,fVar7);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack160,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0xcfd1f3108);
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack240,false);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack240);
        app::lua_bind::ControlModule__set_rumble_impl
                  (this->moduleAccessor,HVar6,iVar3,(bool)(bVar1 & 1),0x50000000);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack160);
LAB_71001a74c0:
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
LAB_71001a6f3c:
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xe724031fb);
            HVar6 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack96,fVar7);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::L2CValue(aLStack128,ENERGY_STOP_RESET_TYPE_AIR);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack240,0.0);
            lib::L2CValue::L2CValue(aLStack256,0.0);
            lib::L2CValue::L2CValue(aLStack272,0.0);
            lib::L2CValue::L2CValue(aLStack288,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
            app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack112,fVar7);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
            lib::L2CValue::L2CValue(aLStack160,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
            lib::L2CValue::L2CValue(aLStack240,0.0);
            lib::L2CValue::L2CValue(aLStack256,0.0);
            lib::L2CValue::L2CValue(aLStack272,0.0);
            lib::L2CValue::L2CValue(aLStack288,0.0);
            lib::L2CValue::L2CValue(aLStack304,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
            app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::L2CValue
                      (aLStack160,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_KO_GRAVITY_END);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack160);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
            }
            else {
              lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
              lib::L2CValue::L2CValue(aLStack240,0.0);
              lib::L2CValue::L2CValue(aLStack256,0.0);
              lib::L2CValue::L2CValue(aLStack272,0.0);
              lib::L2CValue::L2CValue(aLStack288,0.0);
              lib::L2CValue::L2CValue(aLStack304,0.0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
              app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack160);
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
            }
            goto LAB_71001a74c0;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_KO_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_KO_GRAVITY_END);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_KO_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                   (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar7);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack128,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
        }
      }
      iVar3 = 0;
      goto LAB_71001a774c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::~L2CValue(aLStack224);
      pLVar5 = aLStack208;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack192);
      pLVar5 = aLStack176;
    }
LAB_71001a7490:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar5 = aLStack112;
      goto LAB_71001a7490;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) goto LAB_71001a6924;
  }
  iVar3 = 1;
LAB_71001a774c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

